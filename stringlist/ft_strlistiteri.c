/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlistiteri.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/10 22:43:17 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:24 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	iteristr_putendl(int i, char *str)
{
	ft_printf("%s\n", str);
	(void)i;
}

const char	*iteristr_name(const char *newname)
{
	static const char	*name = "strlist";

	if (newname != NULL)
		name = newname;
	return (name);
}

void	iteristr_showstr(int i, char *str)
{
	ft_printf("%s[%d]: [%s]\n", iteristr_name(NULL), i, str);
}

// void	iteristr_showstr_getname(int i, char *str)
// {
// 	static char	*name;

// 	if (i == 0)
// 	{
// 		free(name);
// 		ft_printf("First content: %s\n"
// 			"Showstr_name: ", str);
// 		name = get_next_line(0);
// 	}
// 	ft_printf("%s[%d]: [%s]\n", name, i, str);
// }

void	iteristr_showaddress(int i, char *str)
{
	ft_printf("%s[%d]: %p\n", iteristr_name(NULL), i, str);
}

void	ft_strlistiteri(char **strlist, void (*iteristr)(int, char *))
{
	int	y;

	if (strlist == NULL || iteristr == NULL)
		return ;
	y = -1;
	while (strlist[++y] != NULL)
		iteristr(y, strlist[y]);
}
