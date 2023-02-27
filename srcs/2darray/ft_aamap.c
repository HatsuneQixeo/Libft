/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aamap.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:46:04 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/27 10:59:56 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib2darray.h"

void	**ft_aamap(void **src, t_ftmap ft_map)
{
	void	**aa;
	int		y;

	aa = malloc(sizeof(void *) * (ft_aasize(src) + 1));
	y = 0;
	while (*src != NULL)
	{
		aa[y] = ft_map(*src++);
		y += aa[y] != NULL;
	}
	aa[y] = NULL;
	return (aa);
}

char	**ft_strlistdup(char **strlist)
{
	return ((char **)ft_aamap((void **)strlist, map_strdup));
}
