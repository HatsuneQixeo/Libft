/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:45:29 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:24 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

/**
 * @brief Practically the same with aasize, but I will leave the refactor later
 * 
 * @param strlist 
 * @return int 
 */
int	ft_strcount(char **strlist)
{
	int	i;

	if (strlist == NULL)
		return (0);
	i = 0;
	while (*strlist++ != NULL)
		i++;
	return (i);
}

int	ft_aasize(void **aa)
{
	int	i;

	if (aa == NULL)
		return (0);
	i = 0;
	while (*aa++ != NULL)
		i++;
	return (i);
}
