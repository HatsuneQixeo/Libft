/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:35:42 by hqixeo            #+#    #+#             */
/*   Updated: 2022/07/06 14:36:51 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t	i;
	char	chr;

	if (str == NULL)
		return (NULL);
	i = ft_strlen(str) + 1;
	chr = (char)c;
	while (i--)
		if (str[i] == chr)
			return ((char *)&str[i]);
	return (NULL);
}
