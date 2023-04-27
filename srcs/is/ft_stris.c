/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strisnumeric.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 22:43:17 by hqixeo            #+#    #+#             */
/*   Updated: 2023/04/10 02:27:51 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libis.h"
#include "libstring.h"

/**
 * Question: What should this function return if the given string is empty
 */
int	stris_only(const char *str, t_ftis ft_is)
{
	while (*str != '\0' && ft_is(*str))
		str++;
	return (*str == '\0');
}

int	stris_numeric(const char *str)
{
	char *const		trimmed = ft_strtrim(str, " \t");
	const size_t	start = (*trimmed == '-' || *trimmed == '+');
	int				ret;

	if (trimmed[start] == '\0')
		ret = 0;
	else
		ret = stris_only(&trimmed[start], ft_isdigit);
	free(trimmed);
	return (ret);
}

int	stris_empty(const char *str)
{
	return (str[0] == '\0');
}
