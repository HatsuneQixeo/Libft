/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lsttoaa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/15 23:49:07 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/10 22:43:17 by hqixeo           ###   ########.fr       */
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
		y += strlist[y] != NULL;
		lst = lst->next;
	}
	strlist[y] = NULL;
	return (strlist);
}

// char	**ft_lsttoaa_clear(t_list **lst)
// {
// 	char	**strlist;
// 	t_list	*tmp;
// 	int		y;

// 	if (lst == NULL || *lst == NULL)
// 		return (NULL);
// 	strlist = malloc(sizeof(char *) * (ft_lstsize(*lst) + 1));
// 	if (strlist == NULL)
// 		return (NULL);
// 	y = 0;
// 	while (*lst != NULL)
// 	{
// 		tmp = *lst;
// 		strlist[y] = tmp->content;
// 		*lst = tmp->next;
// Potential leaks? should've been ft_lstdelone
// 		free(tmp);
// 		if (strlist[y++] == NULL)
// 			ft_lstclear(lst, free);
// 	}
// 	strlist[y] = NULL;
// 	return (strlist);
// }

char	**ft_lsttoaa_clear(t_list **lst)
{
	char	**strlist;
	
	strlist = ft_lsttoaa(*lst);
	ft_lstclear(lst, free);
	return (strlist);
}
