/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrelease_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/06 20:04:10 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/26 19:11:16 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

int	ft_strrelease_fd(char *str, int fd)
{
	int	len;

	len = ft_putstr_fd(str, fd);
	free(str);
	return (len);
}
