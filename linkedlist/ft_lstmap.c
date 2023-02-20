/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:04:57 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:22 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst_src, t_ftmap ft_map, t_ftdel del)
{
	t_list	*lst_map;
	t_list	*node_map;

	lst_map = NULL;
	while (lst_src != NULL)
	{
		node_map = ft_lstnew(ft_map(lst_src->content));
		if (node_map == NULL)
		{
			ft_lstclear(&lst_map, del);
			break ;
		}
		lst_src = lst_src->next;
		ft_lstadd_back(&lst_map, node_map);
	}
	return (lst_map);
}
