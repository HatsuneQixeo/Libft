/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   strsuffix.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:23:59 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:10 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{

	ft_dprintf(2, ":%d\n", cmp_strsuffix("Hatsune Miku is cute", "cute"));
	ft_dprintf(2, ":%d\n", cmp_strsuffix("Hatsune Miku is cute", "ute"));
	ft_dprintf(2, ":%d\n", cmp_strsuffix("Hatsune Miku is cute", "te"));
	ft_dprintf(2, ":%d\n", cmp_strsuffix("Hatsune Miku is cute", "e"));
	ft_dprintf(2, ":%d\n", cmp_strsuffix("Hatsune Miku is cute", ""));

	ft_dprintf(2, ":%d\n", cmp_strsuffix("Hatsune Miku is cute", "a"));
	ft_dprintf(2, ":%d\n", cmp_strsuffix("Hatsune Miku is cute", "u"));
	ft_dprintf(2, ":%d\n", cmp_strsuffix("Hatsune Miku is cute", "i"));
	ft_dprintf(2, ":%d\n", cmp_strsuffix("Hatsune Miku is cute", "s"));
	ft_dprintf(2, ":%d\n", cmp_strsuffix("Hatsune Miku is cute", "H"));

	ft_dprintf(2, ":%d\n", cmp_strsuffix("a", "Hatsune Miku is cute"));
	ft_dprintf(2, ":%d\n", cmp_strsuffix("b", "Hatsune Miku is cute"));
	ft_dprintf(2, ":%d\n", cmp_strsuffix("e", "Hatsune Miku is cute"));
	ft_dprintf(2, ":%d\n", cmp_strsuffix("a", "Hatsune Miku is cute"));
	ft_dprintf(2, ":%d\n", cmp_strsuffix("f", "Hatsune Miku is cute"));
}
