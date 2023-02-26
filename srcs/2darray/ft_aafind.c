/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aafind.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:07:51 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/26 19:11:15 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib2darray.h"

void	**ft_aafind(void **aa, const void *ref, t_ftcmpis ft_cmp)
{
	while (*aa != NULL && !ft_cmp(aa, &ref))
		aa++;
	if (*aa == NULL)
		return (NULL);
	return (aa);
}

char	**ft_strlistfind_prefix(char **strlist, const char *prefix)
{
	return ((char **)ft_aafind((void **)strlist, prefix, cmpstr_isprefix));
}
