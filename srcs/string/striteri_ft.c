/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri_ft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:49:56 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/27 11:00:01 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libto.h"

void	iteri_tolower(unsigned int i, void *str)
{
	char	*p_chr;

	p_chr = &((char *)str)[i];
	*p_chr = ft_tolower(*p_chr);
}

void	iteri_toupper(unsigned int i, void *str)
{
	char	*p_chr;

	p_chr = &((char *)str)[i];
	*p_chr = ft_toupper(*p_chr);
}
