/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdelone.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:04:34 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:12 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "liblinked_list.h"

void	ft_lstdelone(t_list *node, t_ftdel del)
{
	if (node == NULL)
		return ;
	else if (del)
		del(node->content);
	free(node);
}
