/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstextract_front.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 10:21:02 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/27 10:59:58 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "liblinked_list.h"

t_list	*ft_lstextract_front(t_list **lst)
{
	t_list	*node;

	if (*lst == NULL)
		return (NULL);
	node = *lst;
	(*lst) = (*lst)->next;
	node->next = NULL;
	return (node);
}
