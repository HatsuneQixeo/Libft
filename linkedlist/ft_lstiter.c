/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/13 17:04:43 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:22 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_lstiter(t_list *lst, t_ftlstiter ft)
{
	int	i;

	i = 0;
	while (lst != NULL)
	{
		ft(i++, lst->content);
		lst = lst->next;
	}
}
