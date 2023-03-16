/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:29:24 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/16 09:26:45 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libstring.h"

void	ft_striteri(char *str, t_ftiteri ft_iteri)
{
	size_t	i;

	if (str == NULL || ft_iteri == NULL)
		return ;
	i = -1;
	while (str[++i] != '\0')
		ft_iteri(i, str);
}
