/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlistcombine.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:07:51 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:32 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Combine and free both the srclist
 * (elements are moved into the new strlist)
 * @param srclist1 The firsthalf of the strlist
 * @param srclist2 The secondhalf od the strlist
 * @return char** The combined strlist
 */
char	**ft_strlistcombine(char **srclist1, char **srclist2)
{
	char	**strlist_tmp;
	int		size_srclist1;
	int		size_srclist2;

	size_srclist1 = ft_strcount(srclist1);
	size_srclist2 = ft_strcount(srclist2);
	strlist_tmp = malloc(sizeof(char *) * (size_srclist1 + size_srclist2 + 1));
	if (strlist_tmp == NULL)
		return (NULL);
	ft_memcpy(strlist_tmp, srclist1, sizeof(char *) * size_srclist1);
	ft_memcpy(strlist_tmp + size_srclist1, srclist2,
		sizeof(char *) * (size_srclist2 + 1));
	free(srclist1);
	free(srclist2);
	return (strlist_tmp);
}
