/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlistcombine.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:07:51 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/27 10:59:56 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib2darray.h"

/**
 * @brief Combine and free both the srclist
 * (elements are moved into the new strlist)
 * @param srclist1 The firsthalf of the strlist
 * @param srclist2 The secondhalf od the strlist
 * @return char** The combined strlist
 */
char	**ft_strlistcombine(char **srclist1, char **srclist2)
{
	char		**strlist_tmp;
	const int	len_srclist1 = ft_strcount(srclist1);
	const int	len_srclist2 = ft_strcount(srclist2);

	strlist_tmp = malloc(sizeof(char *) * (len_srclist1 + len_srclist2 + 1));
	if (strlist_tmp == NULL)
		return (NULL);
	ft_memcpy(strlist_tmp, srclist1, sizeof(char *) * len_srclist1);
	ft_memcpy(&strlist_tmp[len_srclist1], srclist2,
		sizeof(char *) * len_srclist2);
	strlist_tmp[len_srclist1 + len_srclist2] = NULL;
	free(srclist1);
	free(srclist2);
	return (strlist_tmp);
}
