/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memswap.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:15:34 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/16 09:26:44 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_swapchar(char *sign, char *set)
{
	char	tmp;

	tmp = *sign;
	*sign = *set;
	*set = tmp;
}

void	ft_memswap(void *ptr1, void *ptr2, size_t bytes)
{
	while (bytes--)
		ft_swapchar(ptr1++, ptr2++);
}
