/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlistclear.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 21:40:42 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:24 by hqixeo           ###   ########.fr       */
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

// void	ft_aaclear(void **aa, t_ftdel del)
// {
// 	int	y;

// 	if (aa == NULL)
// 		return ;
// 	y = 0;
// 	while (aa[y] != NULL)
// 	{
// 		del(aa[y]);
// 		aa[y] = NULL;
// 	}
// 	free(aa);
// }
