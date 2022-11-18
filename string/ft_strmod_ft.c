/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmod_ft.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/18 21:54:44 by hqixeo            #+#    #+#             */
/*   Updated: 2022/11/18 21:54:45 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	*ft_mod_realloc(const char *src, const char *str_void)
{
	(void)str_void;
	return (ft_strdup(src));
}

//Limit the end part
//BIGNOTE: This is an experimental function
//Future Note: Making a substrfree is probably the most universal solution
//
//errhandling1
//	else if (src_end > ft_strchr(src, '\0'))
//Passing in another string is undefined
//, but it can handle potential inaccurate value
//Note: Could be left out for substr to handle
//
//errhandling2 (Active)
//	else if (!ft_strstr(src, src_end))
//Does it's job well, but passing inaccurate value will trigger it
//Note: They do not co-exist
//
//Note: Passing the same address will result in the src being emptied
//, could be redifined to return the original string instead
//, (off the original intention)
char	*ft_mod_substr(const char *src, const char *src_end)
{
	if (!src)
		return (0);
	else if (!src_end || src_end < src || !ft_strstr(src, src_end))
		return (ft_strdup(src));
	return (ft_substr(src, 0, src_end - src));
}

//Skip the starting part
//Note: experimental function, current usage is unclear
//Find the string and duplicate it
//, dedicated for strmodify
//, but could be use individually as the way it is stated
char	*ft_mod_strstrdup(const char *src, const char *find)
{
	return (ft_strdup(ft_strstr(src, find)));
}
