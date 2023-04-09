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
	unsigned int	i;

	i = 0;
	while (aa[i] != NULL)
	{
		if (!ft_cmp(aa[i], ref))
		{
			if (ft_del)
				ft_del(aa[i]);
			ft_memmove(&aa[i], &aa[i + 1],
				sizeof(void *) * (ft_aasize(&aa[i + 1]) + 1));
		}
		else
			i++;
	}
}
