/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strliststr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 16:59:56 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:32 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strliststr(char **strlist, const char *str)
{
	char	*find;

	while (*strlist != NULL)
	{
		find = ft_strstr(*strlist++, str);
		if (find != NULL)
			return (find);
	}
	return (NULL);
}
