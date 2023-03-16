/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_front.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:04:23 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/16 09:26:43 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "liblinked_list.h"

void	ft_lstadd_front(t_list **lst, t_list *node)
{
	if (node == NULL)
		return ;
	ft_lstadd_back(&node->next, *lst);
	*lst = node;
}
