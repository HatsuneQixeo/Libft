/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strinsert.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/13 08:16:49 by hqixeo            #+#    #+#             */
/*   Updated: 2022/11/13 08:16:50 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Function as joining 3 string together
//Supports inserting a string in between a string
//
//Error handling
//If the last is in front of first and they are from the same string
//, it will return NULL
//If first and last is pointing to the same string
//, it will be treated as they are individual string
//, for the purpose of ft_strinsert("'", str, "'");
//, ?Note: But i could probably let another function handle that instead?
//, with a name like strenclosed? strsandwich? strquote?
//Return NULL if one of the argument is NULL
char	*ft_strinsert(const char *first, const char *insert, const char *last)
{
	char	*str;
	size_t	len;

	if (!first || !insert || !last)
		return (0);
	else if (first == last
		|| (first + ft_strlen(first) - ft_strlen(last)) != last)
		return (ft_strmodify(ft_strjoin(first, insert), last, ft_strjoin));
	else if (first > last)
		return (0);
	len = ft_strlen(first) + ft_strlen(insert) + 1;
	str = malloc(len);
	if (!str)
		return (0);
	ft_strlcpy(str, first, last - first + 1);
	ft_strlcat(str, insert, len);
	ft_strlcat(str, last, len);
	return (str);
}
