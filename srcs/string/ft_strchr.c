/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:35:16 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/16 09:26:45 by hqixeo           ###   ########.fr       */
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

char	*ft_strchr_is(const char *str, t_ftis ft_is)
{
	if (!ft_is)
		return (NULL);
	while (*str != '\0')
	{
		if (ft_is(*str))
			return ((char *)str);
		str++;
	}
	return (NULL);
}
