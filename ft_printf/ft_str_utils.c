/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:54:31 by hqixeo            #+#    #+#             */
/*   Updated: 2022/08/05 14:54:32 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strskipchr(const char *str, char c)
{
	if (!str)
		return (0);
	while (*str && *str == c)
		str++;
	return ((char *)str);
}

char	*ft_strcreate(char set, size_t size)
{
	char	*str;

	if (!size)
		return (0);
	str = malloc(size + 1);
	str[size] = 0;
	return (ft_memset(str, set, size));
}

void	ft_swapchar(char *sign, char *set)
{
	char	tmp;

	tmp = *sign;
	*sign = *set;
	*set = tmp;
}
