/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter_ft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:43 by hqixeo            #+#    #+#             */
/*   Updated: 2023/04/10 02:27:50 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libalgo.h"
#include "ft_printf.h"

const char	*iteri_name(const char *newname)
{
	static const char	*name = ITNAME_DEFAULT;

	if (newname != NULL)
		name = newname;
	return (name);
}

void	iteri_putendl(unsigned int i, void *strlist)
{
	const char	*str = ((const char **)strlist)[i];

	ft_putendl_fd(str, 1);
}

void	iteri_showstr(unsigned int i, void *strlist)
{
	const char	*str = ((const char **)strlist)[i];

	ft_dprintf(2, "%s[%d]: [%s]\n", iteri_name(NULL), i, str);
}

void	iteri_showaddress(unsigned int i, void *aa)
{
	const void	*ptr = ((const void **)aa)[i];

	ft_dprintf(2, "%s[%d]: %p\n", iteri_name(NULL), i, ptr);
}
