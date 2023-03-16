/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execve.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:54:36 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/16 09:26:39 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv, char **envp)
{
	iteri_name("argv");
	ft_strlistiteri(argv, iteri_showstr);
	iteri_name("envp");
	ft_strlistiteri(envp, iteri_showstr);
	(void)argc;
}
