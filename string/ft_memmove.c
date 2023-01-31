/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:02:54 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:30 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

void	*ft_memmove(void *dst, const void *src, size_t bytes)
{
	char	*ptr_src;
	char	*ptr_dst;

	ptr_src = (char *)src;
	ptr_dst = (char *)dst;
	if (dst == NULL || src == NULL)
		return (NULL);
	if (dst > src)
		while (bytes--)
			ptr_dst[bytes] = ptr_src[bytes];
	else if (dst < src)
		while (bytes--)
			*ptr_dst++ = *ptr_src++;
	return (dst);
}
