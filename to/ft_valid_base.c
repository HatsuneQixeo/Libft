/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:16:58 by hqixeo            #+#    #+#             */
/*   Updated: 2022/11/13 08:17:04 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static char	ft_str_dupchr(const char *base)
{
	base--;
	while (*++base)
		if (ft_strchr(base + 1, *base))
			return (*base);
	return (0);
}

int	ft_validbase(const char *base)
{
	return (ft_strlen(base) >= 2 && !ft_str_dupchr(base)
		&& !ft_strchr(base, '+') && !ft_strchr(base, '-'));
}
