/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memprint.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:16:42 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/10 22:43:17 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// ft_printf("is: %.*s\n", bpl, ptr_uc);
static void	memprint_loop(const void **ptr, size_t bpl, int pad, size_t i_bytes)
{
	const unsigned char	*ptr_uc;

	if (bpl == 0)
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

	if (data_size == 0 || ptr == NULL)
		return ;
	pad = ft_nbrsize(bytes);
	i_bytes = 1;
	while (bytes >= data_size)
	{
		memprint_loop(&ptr, data_size, pad, i_bytes++);
		bytes -= data_size;
	}
	memprint_loop(&ptr, bytes, pad, i_bytes);
}
