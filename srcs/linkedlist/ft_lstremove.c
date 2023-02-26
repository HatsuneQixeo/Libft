/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstremove.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:04:01 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/26 19:11:17 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "liblinked_list.h"

/**
 * @brief Delete the given node in linked list
 * 
 * @param lst 
 * @param node 
 * @param del 
 */
void	ft_lstremove(t_list **lst, t_list *node, t_ftdel del)
{
	t_list	*tmp;

	if (*lst == NULL)
		return ;
	else if (*lst == node)
	{
		tmp = *lst;
		*lst = tmp->next;
		ft_lstdelone(tmp, del);
	}
	else
		ft_lstremove(&(*lst)->next, node, del);
}
