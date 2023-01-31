/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_valid_base.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:16:58 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:32 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_str_dupchr(const char *base)
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
