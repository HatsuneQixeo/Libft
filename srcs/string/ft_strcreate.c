/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcreate.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 19:11:18 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:14 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libstring.h"

char	*ft_strcreate(char set, size_t len)
{
	char	*str;

	str = malloc(len + 1);
	if (str == NULL)
		return (NULL);
	str[len] = '\0';
	return (ft_memset(str, set, len));
}
