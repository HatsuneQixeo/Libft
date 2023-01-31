/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlistfind_prefix.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:07:51 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:32 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	**ft_strlistfind_prefix(char **strlist, const char *prefix)
{
	const size_t	len_prefix = ft_strlen(prefix);

	while (*strlist != NULL && ft_strncmp(prefix, *strlist, len_prefix))
		strlist++;
	if (*strlist == NULL)
		return (NULL);
	return (strlist);
}
