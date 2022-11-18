/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_strlist.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 21:40:42 by hqixeo            #+#    #+#             */
/*   Updated: 2022/09/16 21:40:44 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_clear(char **str)
{
	if (!str)
		return ;
	free(*str);
	*str = 0;
}

void	ft_clear_strlist(char **strlist)
{
	int	y;

	if (!strlist)
		return ;
	y = 0;
	while (strlist[y])
		ft_clear(&strlist[y++]);
	free(strlist);
}
