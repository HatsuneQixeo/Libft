/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_aatolst.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:54:42 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:24 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_aatolst(void **aa, t_ftmap ft_map)
{
	t_list	*lst;
	int		size;

	lst = NULL;
	size = ft_aasize(aa);
	while (size--)
		ft_lstadd_front(&lst, ft_lstnew(ft_map(aa[size])));
	return (lst);
}

t_list	*ft_aatolst_clear(void **aa)
{
	t_list	*lst;

	lst = ft_aatolst(aa, lstmap_copy);
	free(aa);
	return (lst);
}