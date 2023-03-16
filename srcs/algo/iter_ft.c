/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   iter_ft.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:43 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/16 09:26:42 by hqixeo           ###   ########.fr       */
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

void	iteri_putendl(unsigned int i, void *p_str)
{
	const char	*str = ((const char **)p_str)[i];

	ft_putendl_fd(str, 1);
	(void)i;
}

void	iteri_showstr(unsigned int i, void *p_str)
{
	const char	*str = ((const char **)p_str)[i];

	ft_dprintf(2, "%s[%d]: [%s]\n", iteri_name(NULL), i, str);
}

void	iteri_showaddress(unsigned int i, void *p_ptr)
{
	const void	*ptr = ((const void **)p_ptr)[i];

	ft_dprintf(2, "%s[%d]: %p\n", iteri_name(NULL), i, ptr);
}
