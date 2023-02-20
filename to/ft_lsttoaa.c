/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttoaa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:49:07 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:24 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Maybe a ft_lsttoaa_reverse for a reversed linked list?
 * 	Example where there would be reversed linked list:
 * 		Used ft_lstadd_front instead of ft_lstadd_back in loop
 * 			for linear time complexity
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

	aa = ft_lsttoaa(*lst, lstmap_copy);
	ft_lstclear(lst, NULL);
	return (aa);
}

/**
 * @brief Impossible,
 * because there was no way to return a type that is not pointer from ft_map
 * and still know the exact byte to dereference
 * GUESS WHAT, IT WAS POSSIBLE HAHA
 * @param lst 
 * @param ft_map 
 * @param sizeof_datatype 
 * @return void* 
//  */
// void	*ft_lstto_anyarray(t_list *lst,
// 			void (*ft_copy)(void *dst, void *src), size_t sizeof_datatype)
// {
// 	void	*array;
// 	int		y;

// 	array = malloc(sizeof_datatype * (ft_lstsize(lst) + 1));
// 	if (array == NULL)
// 		return (NULL);
// 	y = 0;
// 	while (lst != NULL)
// 	{
// 		ft_memcpy(array + y, lst->content, sizeof_datatype);
// 		y += sizeof_datatype;
// 		lst = lst->next;
// 	}
// 	ft_bzero(array + y, sizeof_datatype);
// 	return (array);
// }
