/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcount.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:45:29 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/10 22:43:18 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

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
