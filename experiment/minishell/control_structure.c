/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   control_structure.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:54:36 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:20 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "minishell.h"

t_list	*ms_control_structure(const char *input_raw);

int	main(void)
{
	while (1)
	{
		t_list	*lst;
		char	*input = get_next_line(0);

		if (input == NULL)
			break ;
		lst = ms_control_structure(input);
		free(input);
	}
}
