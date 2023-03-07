/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmpis_str_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:42 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:12 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libstring.h"

int	cmp_strlesser(const void *str1, const void *str2)
{
	return (ft_strcmp(str1, str2));
}

int	cmp_strgreater(const void *str1, const void *str2)
{
	return (ft_strcmp(str2, str1));
}

int	cmp_strprefix(const void *str1, const void *str2)
{
	const char	*it_str1 = str1;
	const char	*it_str2 = str2;
	size_t		i;

	i = 0;
	if (str1 == NULL || str2 == NULL)
		return (0);
	while (it_str1[i] == it_str2[i] && it_str1[i] != '\0')
		i++;
	if (it_str1[i] == '\0' || it_str2[i] == '\0')
		return (0);
	return (it_str1[i] - it_str2[i]);
}

int	cmp_strsuffix(const void *str, const void *suffix)
{
	const char	*suffix_end = ft_strchr(suffix, '\0');
	const char	*str_end = ft_strchr(str, '\0');

	while (str_end != str && suffix_end != suffix
		&& *--str_end == *--suffix_end)
		;
	return (*str_end - *suffix_end);
}
