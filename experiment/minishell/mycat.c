/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   mycat.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:41 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:10 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	while (1)
	{
		char	*input = get_next_line(0);

		ft_dprintf(2, "input: ");
		if (input == NULL)
		{
			ft_dprintf(2, "mycat: eof\n");
			break ;
		}
		ft_dprintf(2, "writing: %s", input);
		if (ft_printf("%s", input) < 0)
			perror("mycat");
		free(input);
	}
}
// experiment/mycat.miku
