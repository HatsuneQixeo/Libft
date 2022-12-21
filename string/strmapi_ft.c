/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:18:06 by hqixeo            #+#    #+#             */
/*   Updated: 2022/09/12 19:18:13 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	mapi_upper(unsigned int i, char c)
{
	return (ft_toupper(c));
	(void)i;
}

char	mapi_lower(unsigned int i, char c)
{
	return (ft_tolower(c));
	(void)i;
}

char	mapi_capitalize(unsigned int i, char c)
{
	static char	prev;

	if (ft_isspace(c))
	{
		prev = 1;
		return (c);
	}
	else if (!i || prev)
	{
		prev = 0;
		return (ft_toupper(c));
	}
	else
		return (ft_tolower(c));
}

char	mapi_miku(unsigned int i, char c)
{
	if (i == 0)
		return ('H');
	else if (i == 1)
		return ('a');
	else if (i == 2)
		return ('t');
	else if (i == 3)
		return ('s');
	else if (i == 4)
		return ('u');
	else if (i == 5)
		return ('n');
	else if (i == 6)
		return ('e');
	else if (i == 7)
		return (' ');
	else if (i == 8)
		return ('M');
	else if (i == 9)
		return ('i');
	else if (i == 10)
		return ('k');
	else if (i == 11)
		return ('u');
	return (c - c);
}
