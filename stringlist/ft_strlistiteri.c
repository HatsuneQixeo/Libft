/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlistiteri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>               +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 22:43:17 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/10 22:43:17 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	iteristr_show_str(int i, char *str)
{
	ft_printf("strlist[%d]: %s\n", i, str);
}

void	iteristr_show_address(int i, char *str)
{
	ft_printf("strlist[%d]: %p\n", i, str);
}

void	ft_strlistiteri(char **strlist, void (*iteristr)(int, char *))
{
	int	y;

	if (strlist == NULL || iteristr == NULL)
		return ;
	y = -1;
	while (strlist[++y] != NULL)
		iteristr(y, strlist[y]);
}
