/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lstinsert.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/03/06 22:23:58 by hqixeo            #+#    #+#             */
/*   Updated: 2023/04/10 02:27:48 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Not tested just yet */
void	ft_lstadd_next(t_list **lst, t_list *insert)
{
	if (insert == NULL)
		return ;
	else if (*lst == NULL)
	{
		*lst = insert;
		return ;
	}
	ft_lstadd_back(&insert, (*lst)->next);
	(*lst)->next = insert;
}

int	main(void)
{
	t_list	*lst;

	lst = NULL;
	ft_lstadd_next(&lst, ft_lstnew("Hatsune"));
	ft_lstiter(lst, lstshow_str);
	ft_lstadd_front(&lst->next, ft_lstnew("cute"));
	ft_lstiter(lst, lstshow_str);
	ft_lstadd_front(&lst->next, ft_lstnew("is"));
	ft_lstiter(lst, lstshow_str);
	ft_lstadd_front(&lst->next, ft_lstnew("Miku"));
	ft_lstiter(lst, lstshow_str);
	// ft_lstadd_next(&lst, ft_lstnew("cute"));
	// ft_lstadd_next(&lst, ft_lstnew("is"));
	// ft_lstadd_next(&lst, ft_lstnew("Miku"));
	ft_lstiter(lst, lstshow_str);
}
