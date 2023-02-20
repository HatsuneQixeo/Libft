/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 00:48:43 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:21 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "../include/ft_printf.h"

// Tester
// https://github.com/gavinfielder/pft
/// @bug Return -(1 + (number_of_conversions * 2)) if the given fd is invalid
//	I do not want to know how to handle if the given fd is closed while printing
int	ft_printf_core(int fd, const char *str, va_list args,
			int (ft_put)(const char *str, int fd))
{
	int		len_total;
	char	*ptr_conversion;
	t_flags	flags;

	len_total = 0;
	flags.fd = fd;
	ptr_conversion = ft_strchr(str, '%');
	while (ptr_conversion != NULL)
	{
		len_total += write(flags.fd, str, ptr_conversion - str);
		str = ft_flagextract(ptr_conversion, &flags, args);
		if (flags.format == '\0')
			break ;
		len_total += ft_conversion(args, &flags);
		ptr_conversion = ft_strchr(++str, '%');
	}
	return (len_total + ft_put(str, fd));
}

int	ft_printf(const char *str, ...)
{
	va_list	args;
	int		ret;

	va_start(args, str);
	ret = ft_printf_core(1, str, args, ft_putstr_fd);
	va_end(args);
	return (ret);
}

int	ft_dprintf(int fd, const char *str, ...)
{
	va_list	args;
	int		ret;

	if ((unsigned int)fd >= 1024)
		return (-1);
	va_start(args, str);
	ret = ft_printf_core(fd, str, args, ft_putstr_fd);
	va_end(args);
	return (ret);
}
