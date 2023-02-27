/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   g_static.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:54:36 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/27 10:59:54 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Feels good to fuck with norminette, but don't do this, for real
 * 
 * @return int*** 
 */

static int	***ft_int(void)
{
	static int	**ptr[1];

	return (ptr); 
}

int	main(void)
{
	int	***ptr = ft_int();

	*ptr = (void *)39;
	ft_printf("%d\n", *ft_int());
	*ptr = (void *)831;
	ft_printf("%d\n", *ft_int());
}
