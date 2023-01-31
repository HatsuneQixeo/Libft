/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:35:16 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:31 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>

char	*ft_strchr(const char *str, int c)
{
	char	chr;

	chr = (char)c;
	if (str == NULL)
		return (NULL);
	while (*str != '\0' && *str != chr)
		str++;
	if (*str == chr)
		return ((char *)str);
	return (NULL);
}
