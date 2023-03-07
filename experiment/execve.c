/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   execve.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:54:36 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:08 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv, char **envp)
{
	iteristr_name("argv");
	ft_strlistiteri(argv, iteristr_showstr);
	iteristr_name("envp");
	ft_strlistiteri(envp, iteristr_showstr);
}
