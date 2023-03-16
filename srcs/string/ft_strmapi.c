/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:46:06 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/16 09:26:45 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libstring.h"

char	*ft_strmapi(const char *src, char (*ft)(unsigned int, char))
{
	char	*strmap;
	size_t	i;

	if (src == NULL || ft == NULL)
		return (NULL);
	strmap = malloc(ft_strlen(src) + 1);
	if (strmap == NULL)
		return (NULL);
	i = -1;
	while (src[++i] != '\0')
		strmap[i] = ft(i, src[i]);
	strmap[i] = '\0';
	return (strmap);
}
