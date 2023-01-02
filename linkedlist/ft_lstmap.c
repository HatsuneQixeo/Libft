/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:04:57 by hqixeo            #+#    #+#             */
/*   Updated: 2022/07/13 17:05:00 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*ft)(void *), void (*del)(void *))
{
	t_list	*lst_main;
	t_list	*node_main;

	if (lst == NULL)
		return (NULL);
	lst_main = NULL;
	while (lst != NULL)
	{
		node_main = ft_lstnew(ft(lst->content));
		if (node_main == NULL)
		{
			ft_lstdelone(node_main, del);
			break ;
		}
		lst = lst->next;
		ft_lstadd_back(&lst_main, node_main);
	}
	return (lst_main);
}
