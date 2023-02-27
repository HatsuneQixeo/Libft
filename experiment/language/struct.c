/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   struct.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/25 10:20:59 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/27 10:59:55 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

struct s_struct
{
	char	*str;
	int		nbr;
};

int	main(void)
{
	struct s_struct	ss;

	/* Somehow norminette doesn't complain anymore? Good thing tho */
	ss = (struct s_struct){.str = "Hatsune Miku", .nbr = 831} = miku;
}
