/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstselect.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/27 16:13:52 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/16 09:26:44 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "liblinked_list.h"

t_list	*ft_lstselect(t_list *lst, unsigned int select)
{
	while (lst != NULL && select--)
		lst = lst->next;
	return (lst);
}
