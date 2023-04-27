/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aaremove.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:24:00 by hqixeo            #+#    #+#             */
/*   Updated: 2023/04/10 02:27:50 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include "libto.h"

/**
 * Problem with this function is that it doesn't reallocate,
 * means that even if the element is removed, it's still taking up space
 */
void	ft_aaremove(void **aa, t_ftcmp ft_cmp, const void *ref, t_ftdel ft_del)
{
	void	**it;

	it = aa - 1;
	while (*++it != NULL)
	{
		if (ft_cmp(*it, ref))
			*aa++ = *it;
		else if (ft_del)
			ft_del(*it);
	}
	*aa = NULL;
}

/**
 * Under the context of making a shallow copy,
 * this shares the lifetime with the original array
 * 
 * Can't really delete the element either,
 * that's modifying the original array
 */
void	**ft_aafilter(void **aa, t_ftcmp ft_cmp, const void *ref, t_ftmap map)
{
	t_list	*lst;
	void	**it;

	lst = NULL;
	it = aa + ft_aasize(aa);
	while (it-- != aa)
	{
		if (ft_cmp(*it, ref))
			ft_lstadd_front(&lst, ft_lstnew(map(*it)));
	}
	return (ft_lsttoaa_clear(&lst));
}
