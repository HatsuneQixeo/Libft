/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   const_and_ptr.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:04:01 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:19 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	constptr_and_ptrtoconst(void)
{
	char	add;
	char const	*ptr_to_const;
	const char	*ptr_to_const1;
	char *const	constptr = &add; 
	// *const char	constptr1;

	ptr_to_const = &add;
	ptr_to_const1 = &add;
	// constptr1 = &add;
	add = 'a';
	// Legal
	{
		ptr_to_const++;
		ptr_to_const1++;
		*constptr = 'a';
	}
	// Illegal
	{
		// constptr = &add;
		// *ptr_to_const = 'a';
		// *ptr_to_const1 = 'a';
		// constptr++;
	}
	// constptr1++;
}

int	main(void)
{
	char	*str;
	// Pointer to a constant pointer
	// char *const	*ptr;
	// Pointer to a constant address
	const char	**ptr;

	str = "Hatsune Miku";
	ptr = &str;
	// (*ptr)++;
	// *ptr = "Miku";
	// **ptr = 'a';
}
