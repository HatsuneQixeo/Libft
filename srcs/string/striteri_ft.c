/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   striteri_ft.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 23:49:56 by hqixeo            #+#    #+#             */
/*   Updated: 2023/04/10 02:27:55 by hqixeo           ###   ########.fr       */
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
