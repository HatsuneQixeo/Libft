/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:56:23 by hqixeo            #+#    #+#             */
/*   Updated: 2022/07/08 19:56:24 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Linked list
char	**ft_split(const char *str, char c)
{
	t_list	*lst;
	char	**strlist;
	size_t	len;

	if (str == NULL)
		return (NULL);
	lst = NULL;
	while (*str != '\0')
	{
		len = 0;
		while (*str == c)
			str++;
		if (*str == '\0')
			break ;
		while (str[len] && str[len] != c)
			len++;
		ft_lstadd_back(&lst, ft_lstnew(ft_substr(str, 0, len)));
		str += len;
	}
	strlist = ft_lsttoaa_clear(&lst);
	return (strlist);
}
