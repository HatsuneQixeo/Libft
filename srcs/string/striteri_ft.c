/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri_ft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:49:56 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/26 19:11:19 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libto.h"

void	iteri_lower(unsigned int i, char *str)
{
	(void)i;
	*str = ft_tolower(*str);
}

void	iteri_upper(unsigned int i, char *str)
{
	(void)i;
	*str = ft_toupper(*str);
}
