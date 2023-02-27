/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aasize.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/07 18:45:29 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/27 10:59:56 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "lib2darray.h"

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

int	ft_strcount(char **strlist)
{
	return (ft_aasize((void **)strlist));
}
