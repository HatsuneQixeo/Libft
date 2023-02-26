/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/10 18:29:45 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/26 19:11:16 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_putendl_fd(const char *str, int fd)
{
	if (str == NULL)
		return (0);
	return (ft_putstr_fd(str, fd) + ft_putchar_fd('\n', fd));
}