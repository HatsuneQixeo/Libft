/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   complex_character.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:04:01 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:19 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

//Other language character

static void	print_complex_character(const char *src)
{
	ft_printf("%s\n", src);
	ft_printf("len: %d\n", ft_strlen(src));
	ft_memprint(src, ft_strlen(src), 3);
}

int	main(int argc, char **argv)
{
	char	*str;

	print_complex_character("初音未來,  人類的未來");
	print_complex_character("初音ミク");
	print_complex_character("ミク");
	ft_printf("ARGV\n");
	while (*++argv)
	{
		ft_printf("arg: (%s)\n", *argv);
		ft_printf("len: %d\n", ft_strlen(*argv));
		ft_memprint(*argv, ft_strlen(*argv), 3);
	}
}
