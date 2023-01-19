/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/17 00:48:43 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/10 22:43:17 by hqixeo           ###   ########.fr       */
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
	len_total += ft_put(str, fd);
	va_end(args);
	return (len_total);
}

int	ft_printf(const char *str, ...)
{
	va_list	args;

	va_start(args, str);
	return (ft_printf_core(1, str, args, ft_putstr_fd));
}

int	ft_dprintf(int fd, const char *str, ...)
{
	va_list	args;

	if ((unsigned int)fd >= 1024)
		return (-1);
	va_start(args, str);
	return (ft_printf_core(fd, str, args, ft_putstr_fd));
}

//endl are somewhat useless for printf under normal condition
//, since we usually specify what to print and the argument manually
//, and removing \n is way easier than removing _endl
int	ft_printf_endl(const char *str, ...)
{
	va_list	args;

	va_start(args, str);
	return (ft_printf_core(1, str, args, ft_putendl_fd));
}

int	ft_dprintf_endl(int fd, const char *str, ...)
{
	va_list	args;

	if (fd < 0 || fd >= 1024)
		return (-1);
	va_start(args, str);
	return (ft_printf_core(fd, str, args, ft_putendl_fd));
}
