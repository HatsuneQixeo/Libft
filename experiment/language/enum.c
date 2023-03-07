/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   enum.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:04:01 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:09 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

typedef enum val
{
	NUM1,
	NUM2,
	NUM3,
	NUM4,
	NUM5,
	NUM6,
}			e_num;

int	main(void)
{
	e_num	var;

	var = NUM1;
	printf("e_num size: %lu\n", sizeof(e_num));
	for (int i = 0; i < 10; i++)
		printf("var: %d\n", var++);
}
