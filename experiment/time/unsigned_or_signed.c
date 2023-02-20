/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   unsigned_or_signed.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:04:01 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:21 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <limits.h>

#define limit	UINT_MAX
// Unsigned (8.77 - 8.95)
int	main(void)
{
	for (long i = 1; i < limit; i++)
		if ((unsigned long)i > LONG_MAX);
}

// Signed (10) +-
// int	main(void)
// {
// 	for (long i = 1; i < limit; i++)
// 		if (i < 0 || i > LONG_MAX);
// }

// Unsigned variable (casting does not seem to degrade in performance)
// int	main(void)
// {
// 	for (unsigned long i = 1; i < limit; i++)
// 		if (i > LONG_MAX);
// }
