/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttoaa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:49:07 by hqixeo            #+#    #+#             */
/*   Updated: 2022/11/15 23:49:08 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char	**ft_lsttoaa(t_list *lst)
{
	char	**strlist;
	int		y;

	if (!lst)
		return (0);
	strlist = malloc(sizeof(char *) * (ft_lstsize(lst) + 1));
	if (!strlist)
		return (0);
	y = 0;
	while (lst)
	{
		strlist[y] = ft_strdup(lst->content);
		if (!strlist[y++])
			break ;
		lst = lst->next;
	}
	strlist[y] = 0;
	return (strlist);
}

char	**ft_lsttoaa_clear(t_list **lst)
{
	char	**strlist;
	t_list	*tmp;
	int		y;

	if (!lst || !*lst)
		return (0);
	strlist = malloc(sizeof(char *) * (ft_lstsize(*lst) + 1));
	if (!strlist)
		return (0);
	y = 0;
	while (*lst)
	{
		tmp = *lst;
		strlist[y] = tmp->content;
		*lst = tmp->next;
		free(tmp);
		if (!strlist[y++])
			ft_lstclear(lst, free);
	}
	strlist[y] = 0;
	return (strlist);
}
