/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlistchr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/16 20:11:32 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/10 22:43:18 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strlistchr(char **strlist, char c)
{
	char	*str;

	if (strlist == NULL)
		return (NULL);
	while (*strlist != NULL)
	{
		str = ft_strchr(*strlist++, c);
		if (str != NULL)
			return (str);
	}
	return (NULL);
}
