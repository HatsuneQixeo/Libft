/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_clear_strlist.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 21:40:42 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:32 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_clear(char **str)
{
	if (str == NULL)
		return ;
	free(*str);
	*str = NULL;
}

void	ft_strlistclear(char **strlist)
{
	int	y;

	if (strlist == NULL)
		return ;
	y = 0;
	while (strlist[y] != NULL)
		ft_clear(&strlist[y++]);
	free(strlist);
}
