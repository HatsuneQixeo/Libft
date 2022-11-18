/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlistiteri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:16:55 by hqixeo            #+#    #+#             */
/*   Updated: 2022/11/13 08:16:56 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_strlistiteri(char **strlist, const char *mod, t_ftstr ft_str)
{
	if (!strlist || !ft_str)
		return ;
	strlist--;
	while (*++strlist)
	{
		*strlist = ft_strmodify(*strlist, mod, ft_str);
		if (!*strlist)
		{
			while (*++strlist)
				free(*strlist);
			return ;
		}
	}
}
