/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aafind.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:07:51 by hqixeo            #+#    #+#             */
/*   Updated: 2023/04/10 02:27:50 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib2darray.h"

void	**ft_aafind(void **aa, const void *ref, t_ftcmp ft_cmp)
{
	unsigned int	i;

	i = 0;
	while (aa[i] != NULL && ft_cmp(aa[i], ref))
		i++;
	if (aa[i] == NULL)
		return (NULL);
	return (&aa[i]);
}

char	**ft_strlistfind_prefix(char **strlist, const char *prefix)
{
	return ((char **)ft_aafind((void **)strlist, prefix, cmp_strprefix));
}
