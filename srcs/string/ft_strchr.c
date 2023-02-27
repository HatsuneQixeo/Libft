/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:35:16 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/27 10:59:59 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libstring.h"

char	*ft_strchr(const char *str, int c)
{
	const char	chr = c;

	if (str == NULL)
		return (NULL);
	while (*str != '\0' && *str != chr)
		str++;
	if (*str == chr)
		return ((char *)str);
	return (NULL);
}
