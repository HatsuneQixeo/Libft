#include "libft.h"

static int	ft_padsize(const char *base)
{
	char	*nbr;
	size_t	size;

	nbr = ft_utoa_base(255, base);
	if (!nbr)
		return (0);
	size = ft_strlen(nbr);
	free(nbr);
	return (size);
}

static int	ft_setnpc(char *str, unsigned char npc,
			const char *base, int len_pad)
{
	char	*str_npc;
	int		pad_size;

	str_npc = ft_utoa_base(npc, base);
	if (!str_npc)
		return (0);
	*str++ = '\\';
	pad_size = len_pad - ft_strlen(str_npc);
	ft_memset(str, *base, pad_size);
	str[pad_size] = 0;
	ft_strlcat(str, str_npc, len_pad + 1);
	free(str_npc);
	return (1 + len_pad);
}

//Convert non printable character to number
//This function does not support complex character ex:(”初音ミク“)
char	*ft_strprintable(const char *src, const char *base)
{
	char	*str_main;
	char	*tmp;
	int		len_pad;
	size_t	len_printable;

	if (!src || !base)
		return (0);
	len_pad = ft_padsize(base);
	len_printable = ft_strchr_countis(src, ft_isprint);
	str_main = malloc(len_printable
			+ ((ft_strlen(src) - len_printable) * (len_pad + 1)) + 1);
	if (!str_main)
		return (0);
	tmp = str_main;
	while (*src)
		if (ft_isprint(*src))
			*str_main++ = *src++;
	else
		str_main += ft_setnpc(str_main, *src++, base, len_pad);
	*str_main = 0;
	return (tmp);
}

static size_t	ft_memchr_countis(const void *src, int (ft_is)(int),
			size_t bytes)
{
	char	*ptr;
	size_t	count;

	if (!src || !ft_is)
		return (0);
	ptr = (char *)src;
	count = 0;
	while (bytes--)
		if (ft_is(*ptr++))
			count++;
	return (count);
}

char	*ft_memprintable(const void *src, const char *base, size_t bytes)
{
	char	*ptr_src;
	char	*str_main;
	char	*tmp;
	int		len_pad;
	size_t	len_printable;

	ptr_src = (char *)src;
	len_pad = ft_padsize(base);
	len_printable = ft_memchr_countis(src, ft_isprint, bytes);
	str_main = malloc(len_printable + ((bytes - len_printable) * (len_pad + 1))
			+ 1);
	if (!str_main)
		return (0);
	tmp = str_main;
	while (bytes--)
		if (ft_isprint(*ptr_src))
			*str_main++ = *ptr_src++;
	else
		str_main += ft_setnpc(str_main, *ptr_src++, base, len_pad);
	*str_main = 0;
	return (tmp);
}
