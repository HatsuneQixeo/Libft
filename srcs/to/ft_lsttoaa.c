/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttoaa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:49:07 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/16 09:26:46 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libto.h"

/**
 * @brief Maybe a ft_lsttoaa_reverse for a reversed linked list?
 * Example where there would be reversed linked list:
 * Used ft_lstadd_front instead of ft_lstadd_back in loop
 * for linear time complexity
 *
 * Not sure about that idea,
 * I probably need to move the whole array
 * if the map function return NULL somewhere
 */

void	**ft_lsttoaa(t_list *lst, t_ftmap ft_map)
{
	void	**aa;
	int		y;

	aa = malloc(sizeof(void *) * (ft_lstsize(lst) + 1));
	if (aa == NULL)
		return (NULL);
	y = 0;
	while (lst != NULL)
	{
		aa[y] = ft_map(lst->content);
		y += (aa[y] != NULL);
		lst = lst->next;
	}
	aa[y] = NULL;
	return (aa);
}

void	**ft_lsttoaa_clear(t_list **lst)
{
	void	**aa;

	aa = ft_lsttoaa(*lst, map_copy);
	ft_lstclear(lst, NULL);
	return (aa);
}
