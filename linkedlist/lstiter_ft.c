/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstiter_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 22:43:17 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:22 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

const char	*lstiter_name(const char *newname)
{
	static const char	*name = "lst";

	if (newname != NULL)
		name = newname;
	return (name);
}

void	lstiter_showstr(int i, void *content)
{
	ft_printf("%s[%d]: [%s]\n", lstiter_name(NULL), i, content);
}

void	lstiter_showaddress(int i, void *content)
{
	ft_printf("%s[%d]: %p\n", lstiter_name(NULL), i, content);
}
