/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_insertion_sort.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:24:00 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/16 09:26:42 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libalgo.h"
#include "ft_printf.h"

static int	errvar(void *begin, size_t data_size, t_ftcmp ft_swapif)
{
	int	err;

	err = 0;
	if (begin == NULL)
		err = ft_dprintf(2, "ft_sort: NULL begin\n");
	if (data_size == 0)
		err = ft_dprintf(2, "ft_sort: Invalid data_size: %d\n", data_size);
	if (ft_swapif == NULL)
		err = ft_dprintf(2, "ft_sort: NULL cmp function\n");
	return (err);
}

void	sort_insertion(void *begin, size_t len, size_t data_size,
			t_ftcmp ft_swapif)
{
	void	*element;
	void	*it_insert;

	if (errvar(begin, data_size, ft_swapif))
		return ;
	element = begin + data_size;
	while (len--)
	{
		it_insert = element;
		while (begin < it_insert
			&& ft_swapif(it_insert, it_insert - data_size))
		{
			ft_memswap(it_insert, it_insert - data_size, data_size);
			it_insert -= data_size;
		}
		element += data_size;
	}
}
