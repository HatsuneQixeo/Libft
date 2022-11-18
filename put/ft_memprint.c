/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:16:42 by hqixeo            #+#    #+#             */
/*   Updated: 2022/11/13 08:16:43 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// ft_printf("is: %.*s\n", bpl, ptr_uc);
static void	memprint_loop(const void **ptr, size_t bpl, int pad, size_t i_bytes)
{
	const unsigned char	*ptr_uc;

	if (!bpl)
		return ;
	ptr_uc = *ptr;
	ft_printf("len(%*d):", pad, i_bytes);
	while (bpl--)
		ft_printf(" [%3d]", *ptr_uc++);
	*ptr = ptr_uc;
	ft_printf("\n");
}

void	ft_memprint(const void *ptr, size_t bytes, size_t data_size)
{
	int		pad;
	size_t	i_bytes;

	if (!data_size || !ptr)
		return ;
	pad = ft_digit_count(bytes);
	i_bytes = 1;
	while (bytes >= data_size)
	{
		memprint_loop(&ptr, data_size, pad, i_bytes++);
		bytes -= data_size;
	}
	memprint_loop(&ptr, bytes, pad, i_bytes);
}
