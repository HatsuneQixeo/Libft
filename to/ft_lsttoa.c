#include "libft.h"

size_t	ft_lsttotal_strlen(t_list *lst)
{
	size_t	total;

	total = 0;
	while (lst != NULL)
	{
		total += ft_strlen(lst->content);
		lst = lst->next;
	}
	return (total);
}

char	*ft_lsttoa(t_list *lst)
{
	char	*str;
	size_t	len;

	if (lst == NULL)
		return (NULL);
	len = ft_lsttotal_strlen(lst) + 1;
	str = malloc(len);
	if (str == NULL)
		return (NULL);
	str[0] = '\0';
	while (lst != NULL)
	{
		ft_strlcat(str, lst->content, len);
		lst = lst->next;
	}
	return (str);
}

char	*ft_lsttoa_clear(t_list **lst)
{
	char	*str;

	str = ft_lsttoa(*lst);
	ft_lstclear(lst, free);
	return (str);
}
