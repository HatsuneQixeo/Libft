/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlistmod.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:16:55 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/10 22:43:18 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_strlistmod(char **strlist, const char *mod, t_modifier ft_mod)
{
	if (strlist == NULL || ft_mod == NULL)
		return ;
	strlist--;
	while (*++strlist != NULL)
	{
		*strlist = ft_strmodify(*strlist, mod, ft_mod);
		if (*strlist != NULL)
			continue ;
		while (*++strlist != NULL)
			free(*strlist);
	}
}
