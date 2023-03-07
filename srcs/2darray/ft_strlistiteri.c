/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlistiteri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 22:43:17 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:11 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib2darray.h"

void	ft_strlistiteri(char **strlist, t_ftiteri ft_iteri)
{
	int	y;

	if (strlist == NULL || ft_iteri == NULL)
		return ;
	y = -1;
	while (strlist[++y] != NULL)
		ft_iteri(y, strlist);
}
