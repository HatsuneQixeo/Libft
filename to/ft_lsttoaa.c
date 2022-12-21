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

	if (lst == NULL)
		return (NULL);
	strlist = malloc(sizeof(char *) * (ft_lstsize(lst) + 1));
	if (strlist == NULL)
		return (NULL);
	y = 0;
	while (lst != NULL)
	{
		strlist[y] = ft_strdup(lst->content);
		if (strlist[y++] == NULL)
			break ;
		lst = lst->next;
	}
	strlist[y] = NULL;
	return (strlist);
}

char	**ft_lsttoaa_clear(t_list **lst)
{
	char	**strlist;
	t_list	*tmp;
	int		y;

	if (lst == NULL || *lst == NULL)
		return (NULL);
	strlist = malloc(sizeof(char *) * (ft_lstsize(*lst) + 1));
	if (strlist == NULL)
		return (NULL);
	y = 0;
	while (*lst != NULL)
	{
		tmp = *lst;
		strlist[y] = tmp->content;
		*lst = tmp->next;
		free(tmp);
		if (strlist[y++] == NULL)
			ft_lstclear(lst, free);
	}
	strlist[y] = NULL;
	return (strlist);
}
