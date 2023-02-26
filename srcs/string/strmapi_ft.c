/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:18:06 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/26 19:11:19 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libto.h"

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
	static char	prev_isspace;

	if (ft_isspace(c))
	{
		prev_isspace = 1;
		return (c);
	}
	else if (i == 0 || prev_isspace)
	{
		prev_isspace = 0;
		return (ft_toupper(c));
	}
	else
		return (ft_tolower(c));
}

char	mapi_miku(unsigned int i, char c)
{
	if (i > 12)
		return (c - c);
	else
		return ("Hatsune Miku"[i]);
}
