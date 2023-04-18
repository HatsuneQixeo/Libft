/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strmapi_ft.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/12 19:18:06 by hqixeo            #+#    #+#             */
/*   Updated: 2023/04/10 02:27:55 by hqixeo           ###   ########.fr       */
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

	if (i == 0 || prev_isspace)
		c = ft_toupper(c);
	else
		c = ft_tolower(c);
	prev_isspace = ft_isspace(c);
	return (c);
}

char	mapi_miku(unsigned int i, char c)
{
	if (i > 12)
		return ('\0');
	else
		return ("Hatsune Miku"[i]);
	(void)c;
}
