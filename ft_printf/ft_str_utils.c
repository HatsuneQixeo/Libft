/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_utils.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/05 14:54:31 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:28 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_strcreate(char set, size_t size)
{
	char	*str;

	if (size == 0)
		return (NULL);
	str = malloc(size + 1);
	if (str == NULL)
		return (NULL);
	str[size] = '\0';
	return (ft_memset(str, set, size));
}

void	ft_swapchar(char *sign, char *set)
{
	char	tmp;

	tmp = *sign;
	*sign = *set;
	*set = tmp;
}
