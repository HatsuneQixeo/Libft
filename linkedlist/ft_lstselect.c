/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lst_select.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:13:52 by hqixeo            #+#    #+#             */
/*   Updated: 2022/09/27 16:13:54 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

t_list	*ft_lstselect(t_list *lst, unsigned int select)
{
	while (lst != NULL && select--)
		lst = lst->next;
	return (lst);
}
