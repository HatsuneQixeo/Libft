/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstiter_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/27 10:59:58 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/27 10:59:58 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "liblinked_list.h"
#include "ft_printf.h"

const char	*lstshow_name(const char *newname)
{
	static const char	*name = LSTNAME_DEFAULT;

	if (newname != NULL)
		name = newname;
	return (name);
}

void	lstshow_str(void *content)
{
	ft_dprintf(2, "%s: [%s]\n", lstshow_name(NULL), content);
}
