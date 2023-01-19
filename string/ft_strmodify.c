/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmodify.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/25 01:34:01 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/10 22:43:17 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

// Modify str with the given function and free it
// Return the modified string
// Note: use ft_strdup to avoid loss of current string
// , instead of returning NULL in given function

// Available function: join, join_rev, trim, printable
char	*ft_strmodify(char *str, const char *mod, t_modifier ft_str)
{
	char	*str_main;

	str_main = ft_str(str, mod);
	free(str);
	return (str_main);
}
