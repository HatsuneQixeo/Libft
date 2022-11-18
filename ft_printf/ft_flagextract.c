/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_flagfactory.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/08/04 11:05:19 by hqixeo            #+#    #+#             */
/*   Updated: 2022/08/04 11:05:21 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "ft_printf.h"

static void	flags_init(t_flags *flags)
{
	flags->format = 0;
	flags->plus = 0;
	flags->space = 0;
	flags->sharp = 0;
	flags->mod_long = 0;
	flags->mod_short = 0;
	flags->mod_z = 0;
	flags->negative_field = 0;
	flags->zero = 0;
	flags->period = 0;
	flags->width = 0;
	flags->precision = 0;
}

static int	ft_atoflag(const char **str, char *flag, int saved, va_list args)
{
	int			value;
	const char	*str_tmp;

	value = 0;
	if (flag)
		*flag = 1;
	str_tmp = *str;
	if (*++str_tmp == '*')
	{
		*str = str_tmp;
		return (va_arg(args, int));
	}
	while (ft_isdigit(*str_tmp))
		value = (value * 10) + (*str_tmp++ - '0');
	*str = --str_tmp;
	if (!value)
		return (saved);
	return (value);
}

static void	ft_width(const char **str, t_flags *flags, va_list args)
{
	const char	*str_tmp;

	str_tmp = *str;
	if (*str_tmp == '-')
		flags->negative_field = 1;
	else if (*str_tmp == '0')
		flags->zero = 1;
	else if (ft_isdigit(*str_tmp) || *str_tmp == '*')
		str_tmp--;
	else
		return ;
	*str = str_tmp;
	flags->width = ft_atoflag(str, 0, flags->width, args);
	if (flags->width < 0)
	{
		flags->width *= -1;
		flags->negative_field = 1;
	}
}

static int	ft_length_modifier(char c, t_flags *flags)
{
	if (c == 'z')
		flags->mod_z = 1;
	else if (c == 'l')
		flags->mod_long += 1;
	else if (c == 'h')
		flags->mod_short += 1;
	else
		return (0);
	return (1);
}

char	*ft_flagextract(const char *str, t_flags *flags, va_list args)
{
	flags_init(flags);
	str++;
	while (*str && (ft_strchr("-+ #.*,;:_hlz", *str) || ft_isdigit(*str)))
	{
		if (*str == '#')
			flags->sharp = 1;
		else if (*str == '+')
			flags->plus = 1;
		else if (*str == ' ')
			flags->space = 1;
		else if (ft_length_modifier(*str, flags))
			(void)str;
		else if (*str == '.')
			flags->precision = ft_atoflag(&str, &flags->period, 0, args);
		else
			ft_width(&str, flags, args);
		str++;
	}
	if (flags->precision < 0)
	{
		flags->period = 0;
		flags->precision = 0;
	}
	flags->format = *str;
	return ((char *)str);
}
