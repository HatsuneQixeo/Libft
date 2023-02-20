/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstclear.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:04:29 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:22 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstclear(t_list **lst, t_ftdel del)
{
	t_list	*node_next;

	while (*lst != NULL)
	{
		node_next = (*lst)->next;
		ft_lstdelone(*lst, del);
		*lst = node_next;
	}
}
