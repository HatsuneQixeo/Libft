/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlistdup.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:46:04 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:32 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**ft_strlistdup(char **src_strlist)
{
	char	**dup_strlist;
	size_t	src_strcount;

	src_strcount = ft_strcount(src_strlist);
	dup_strlist = malloc(sizeof(char *) * (src_strcount + 1));
	dup_strlist[src_strcount] = NULL;
	while (src_strcount--)
		dup_strlist[src_strcount] = ft_strdup(src_strlist[src_strcount]);
	return (dup_strlist);
}
