/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:04:43 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/27 10:59:58 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "liblinked_list.h"

void	ft_lstiter(t_list *lst, t_ftiterlst ft_iterlst)
{
	while (lst != NULL)
	{
		ft_iterlst(lst->content);
		lst = lst->next;
	}
}
