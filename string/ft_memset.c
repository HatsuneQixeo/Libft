/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:03:02 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:30 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

//Note: This funtion set the value byte by byte
//	that means it doesn't function properly if c contain value more than 1 byte
//	despite it asks for an integer value.
void	*ft_memset(void *ptr, int c, size_t bytes)
{
	char	*str;

	str = ptr;
	if (str == NULL)
		return (NULL);
	while (bytes--)
		*str++ = c;
	return (ptr);
}
