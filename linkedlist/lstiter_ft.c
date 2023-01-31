/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstiter_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 22:43:17 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:30 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	lstiter_showstr(int i, void *content)
{
	ft_printf("lst[%d]: [%s]\n", i, content);
}

void	lstiter_showaddress(int i, void *content)
{
	ft_printf("lst[%d]: %p\n", i, content);
}
