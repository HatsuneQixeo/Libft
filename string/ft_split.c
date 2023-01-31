/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/08 19:56:23 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:31 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Linked list
char	**ft_split(const char *str, char c)
{
	t_list	*lst;
	size_t	len;

	if (str == NULL)
		return (NULL);
	lst = NULL;
	str--;
	while (*++str != '\0')
	{
		if (*str == c)
			continue ;
		len = 0;
		while (str[len] != '\0' && str[len] != c)
			len++;
		ft_lstadd_back(&lst, ft_lstnew(ft_substr(str, 0, len)));
		str += len - 1;
	}
	return (ft_lsttoaa_clear(&lst));
}
