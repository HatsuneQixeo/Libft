/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstrlist_fd.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/01 17:18:20 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/10 22:43:17 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putstrlist_fd(char **strlist, int fd)
{
	int	len;

	if (strlist == NULL)
		return (0);
	len = 0;
	while (*strlist != NULL)
		len += ft_putendl_fd(*strlist++, fd);
	return (len);
}

// int	ft_putstrlist_fd(char **strlist, int fd,
// 			int (ft_put)(const char *, int))
// {
// 	int	len;

// 	len = 0;
// 	if (strlist)
// 		while (*strlist)
// 			len += ft_put(*strlist++, fd);
// 	return (len);
// }
