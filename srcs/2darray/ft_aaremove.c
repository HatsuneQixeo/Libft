/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aaremove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:24:00 by hqixeo            #+#    #+#             */
/*   Updated: 2023/04/10 02:27:50 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

void	ft_aaremove(void **aa, t_ftcmp ft_cmp, const void *ref, t_ftdel ft_del)
{
	void	**it;

	it = aa - 1;
	while (*++it != NULL)
	{
		if (ft_cmp(*it, ref))
			*aa++ = *it;
		else if (ft_del)
			ft_del(*it);
	}
	*aa = NULL;
}
