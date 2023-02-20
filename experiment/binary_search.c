/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   binary_search.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:04:01 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:19 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <ctype.h>
#define SHOW(nbr)	dprintf(2, #nbr": %d\n", nbr)

int	*ft_binary_test(int *start, int *end, int find)
{
	int	mid;

	while (start <= end)
	{
		mid = (end - start) / (2 * sizeof(int));
		if (start[mid] == find)
			return (&start[mid]);
		else if (start[mid] < find)
			start += mid + 1;
		else
			end -= mid + 1;
	}
	return (0);
}

int	main(void)
{
	int	arr[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 11};
	
	// SHOW(123);
	printf("%d\n", *ft_binary_test(arr, arr + 10, 5));
}