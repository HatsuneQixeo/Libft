/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:34:54 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:30 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

int	ft_memcmp(const void *ptr1, const void *ptr2, size_t bytes)
{
	unsigned char	*str1;
	unsigned char	*str2;

	str1 = (unsigned char *)ptr1;
	str2 = (unsigned char *)ptr2;
	if (bytes == 0 || ptr1 == NULL || ptr2 == NULL)
		return (0);
	while (*str1 == *str2 && --bytes)
	{
		str1++;
		str2++;
	}
	return (*str1 - *str2);
}
