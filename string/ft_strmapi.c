/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/09 20:46:06 by hqixeo            #+#    #+#             */
/*   Updated: 2022/07/09 20:46:07 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strmapi(const char *str, char (*ft)(unsigned int, char))
{
	char	*str_main;
	size_t	i;

	if (str == NULL || ft == NULL)
		return (NULL);
	str_main = malloc(ft_strlen(str) + 1);
	if (str_main == NULL)
		return (NULL);
	i = -1;
	while (str[++i])
		str_main[i] = ft(i, str[i]);
	str_main[i] = '\0';
	return (str_main);
}
