/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_base.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/04 14:23:47 by hqixeo            #+#    #+#             */
/*   Updated: 2022/09/04 14:23:48 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

static int	ft_nbrsize_base(uintptr_t un_n, int len_base)
{
	int	digit;

	digit = 1;
	while (un_n / len_base)
	{
		un_n /= len_base;
		digit++;
	}
	return (digit);
}

char	*ft_utoa_base(uintptr_t un_n, const char *base)
{
	char			*str;
	size_t			array;
	size_t			len_base;

	if (!ft_validbase(base))
		return (NULL);
	len_base = ft_strlen(base);
	array = ft_nbrsize_base(un_n, len_base);
	str = malloc(array + 1);
	if (str == NULL)
		return (NULL);
	str[array] = '\0';
	while (array--)
	{
		str[array] = base[un_n % len_base];
		un_n /= len_base;
	}
	return (str);
}
