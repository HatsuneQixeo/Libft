/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:04:57 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/10 22:43:18 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_lstmapft ft, t_lstdel del)
{
	int		i;
	t_list	*lst_main;
	t_list	*node;

	if (lst == NULL)
		return (NULL);
	i = 0;
	lst_main = NULL;
	while (lst != NULL)
	{
		node = ft_lstnew(ft(i++, lst->content));
		if (node == NULL)
		{
			ft_lstclear(&node, del);
			return (NULL);
		}
		lst = lst->next;
		ft_lstadd_back(&lst_main, node);
	}
	return (lst_main);
}
