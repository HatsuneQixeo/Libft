/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttoaa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:49:07 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:32 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Maybe a ft_lsttoaa_reverse for a reversed linked list?
 * 	Example where there would be reversed linked list:
 * 		Used ft_lstadd_front instead of ft_lstadd_back in loop
 * 			for linear time complexity
 */

char	**ft_lsttoaa(t_list *lst, t_ftlstmap ft_map)
{
	char	**strlist;
	int		y;

	if (lst == NULL)
		return (NULL);
	strlist = malloc(sizeof(char *) * (ft_lstsize(lst) + 1));
	if (strlist == NULL)
		return (NULL);
	y = 0;
	while (lst != NULL)
	{
		strlist[y] = ft_map(lst->content);
		y += (strlist[y] != NULL);
		lst = lst->next;
	}
	strlist[y] = NULL;
	return (strlist);
}

char	**ft_lsttoaa_clear(t_list **lst)
{
	char	**strlist;

	strlist = ft_lsttoaa(*lst, lstmap_copy);
	ft_lstclear(lst, NULL);
	return (strlist);
}
