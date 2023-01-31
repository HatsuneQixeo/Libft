/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstremove.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:04:01 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:27 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(void)
{
	t_list	*lst;

	lst = NULL;
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Hatsune Miku")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("is")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("not")));
	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("cute")));
	ft_lstremove(&lst, lst->next->next, free);
	ft_lstiter(lst, lstiter_showstr);
	ft_lstclear(&lst, free);
}
