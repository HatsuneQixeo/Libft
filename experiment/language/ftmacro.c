/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ftmacro.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:23:57 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:09 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	const char	*str_qixeolovemiku = "Qixeo love Hatsune Miku";
	const char	*catmiku = "Miku: meow";

	printf("__STRING(%s): %s\n", __STRING(str_qixeolovemiku), str_qixeolovemiku);
	printf("__CONCAT(%s)\n", __CONCAT(cat, miku)); /* No idea what's this for */
	printf("__P(%s)\n", __P(str_qixeolovemiku)); /* No idea what's this for */
	__IDSTRING(mikuname, "mikustr"); /* Declare a static const string(char []), using macro?
								There seem's to somethinig with __used macro too */
	printf("name: %s\n", mikuname);
}
