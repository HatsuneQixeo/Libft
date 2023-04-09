/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:04:17 by hqixeo            #+#    #+#             */
/*   Updated: 2023/04/10 02:27:51 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "liblinked_list.h"

void	ft_lstadd_back(t_list **lst, t_list *add)
{
	if (add == NULL)
		return ;
	else if (*lst == NULL)
		*lst = add;
	else
		ft_lstlast(*lst)->next = add;
}
