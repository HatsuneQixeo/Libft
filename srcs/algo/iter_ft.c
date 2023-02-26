/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter_ft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:43 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/26 19:11:15 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

const char	*iteri_name(const char *newname)
{
	static const char	*name = "it";

	if (newname != NULL)
		name = newname;
	return (name);
}

void	iteri_putendl(int i, void *str)
{
	ft_putendl_fd(str, 1);
	(void)i;
}

void	iteri_showstr(int i, void *str)
{
	ft_dprintf(2, "%s[%d]: [%s]\n", iteri_name(NULL), i, str);
}

void	iteri_showaddress(int i, void *ptr)
{
	ft_dprintf(2, "%s[%d]: %p\n", iteri_name(NULL), i, ptr);
}
