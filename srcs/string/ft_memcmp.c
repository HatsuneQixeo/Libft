/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:34:54 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/16 09:26:44 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libstring.h"

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t bytes)
{
	const unsigned char	*it1 = ptr1;
	const unsigned char	*it2 = ptr2;

	if (bytes == 0 || ptr1 == NULL || ptr2 == NULL)
		return (0);
	while (*it1 == *it2 && --bytes)
	{
		it1++;
		it2++;
	}
	return (*it1 - *it2);
}
