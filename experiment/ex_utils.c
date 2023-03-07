/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ex_utils.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:04:01 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:08 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr_set(const char *str, const char *set)
{
	if (!*set)
		return ((char *)str);
	while (*str)
		if (ft_strchr(set, *str++))
			return ((char *)--str);
	return (0);
}

void	ft_strdelchr(char *str, char c)
{
	while (*str)
	{
		if (*str == c)
		/*
			Time complexity go boom,
			this shit is copying everything behind the character
			everytime it encounters the delchr
		*/
			ft_memmove(str, str + 1, ft_strlen(str + 1) + 1);
		else
			str++;
	}
}

char	*ft_strdup_delchr(const char *src, char c)
{
	char	*str;

	str = ft_strdup(src);
	if (!str)
		return (0);
	ft_strdelchr(str, c);
	return (str);
}

char	*ft_strfilter(const char *src, char c)
{
	char	*str;
	size_t	i;

	str = malloc(ft_strlen(src) - ft_strcount_chr(src, c) + 1);
	if (str == NULL)
		return (NULL);
	i = 0;
	while (*src != '\0')
	{
		if (*src != c)
			str[i++] = *src;
		src++;		
	}
	str[i] = '\0';
	return (str);
}
