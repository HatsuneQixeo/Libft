/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:29:24 by hqixeo            #+#    #+#             */
/*   Updated: 2022/07/10 18:29:24 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_striteri(char *str, void (*ft)(unsigned int, char *))
{
	size_t	i;

	if (str == NULL || ft == NULL)
		return ;
	i = -1;
	while (str[++i] != '\0')
		ft(i, &str[i]);
}
