/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   cmpis_str_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:42 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/26 19:11:15 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libstring.h"

int	cmpstr_islesser(const void *p_str1, const void *p_str2)
{
	const char	*str1 = *(const char **)p_str1;
	const char	*str2 = *(const char **)p_str2;

	return (ft_strcmp(str1, str2) < 0);
}

int	cmpstr_isgreater(const void *p_str1, const void *p_str2)
{
	const char	*str1 = *(const char **)p_str1;
	const char	*str2 = *(const char **)p_str2;

	return (ft_strcmp(str1, str2) > 0);
}

int	cmpstr_isprefix(const void *p_str, const void *p_prefix)
{
	const char	*it_str = *(const char **)p_str;
	const char	*it_prefix = *(const char **)p_prefix;
	size_t		i;

	i = 0;
	while (it_str[i] != '\0' && it_prefix[i] != '\0')
	{
		if (it_str[i] != it_prefix[i])
			return (0);
		i++;
	}
	return (1);
}
