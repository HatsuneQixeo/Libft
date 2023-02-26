/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:29:24 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/26 19:11:18 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libstring.h"

void	ft_striteri(char *str, void (*ft)(unsigned int, char *))
{
	size_t	i;

	if (str == NULL || ft == NULL)
		return ;
	i = -1;
	while (str[++i] != '\0')
		ft(i, &str[i]);
}
