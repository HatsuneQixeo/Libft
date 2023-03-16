/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/06 14:35:42 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/16 09:26:46 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libstring.h"

char	*ft_strrchr(const char *str, int c)
{
	size_t		i;
	const char	chr = c;

	if (str == NULL)
		return (NULL);
	i = ft_strlen(str) + 1;
	while (i--)
		if (str[i] == chr)
			return ((char *)&str[i]);
	return (NULL);
}
