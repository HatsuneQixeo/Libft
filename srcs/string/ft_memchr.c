/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:32:24 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:13 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libstring.h"

void	*ft_memchr(const void *ptr, int c, size_t bytes)
{
	const char	*str = ptr;
	const char	chr = c;

	if (str == NULL)
		return (NULL);
	while (bytes--)
	{
		if (*str == chr)
			return ((void *)str);
		str++;
	}
	return (NULL);
}
