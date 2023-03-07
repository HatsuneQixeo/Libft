/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aaclear.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 21:40:42 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:11 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib2darray.h"

void	ft_aaclear(void **aa, t_ftdel del)
{
	int	y;

	if (aa == NULL)
		return ;
	y = -1;
	while (aa[++y] != NULL)
	{
		del(aa[y]);
		aa[y] = NULL;
	}
	free(aa);
}

void	ft_strlistclear(char **strlist)
{
	ft_aaclear((void **)strlist, free);
}
