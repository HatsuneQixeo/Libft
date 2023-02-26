/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblinked_list.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:49 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/26 19:11:20 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBLINKED_LIST_H
# define LIBLINKED_LIST_H

# include "libalgo.h"
# include <stdlib.h>

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/* Linked list */
void	ft_lstadd_back(t_list **lst, t_list *add);
void	ft_lstadd_front(t_list **lst, t_list *add);
void	ft_lstclear(t_list **lst, t_ftdel del);
void	ft_lstdelone(t_list *lst, t_ftdel del);
t_list	*ft_lstextract_front(t_list **lst);
void	ft_lstiter(t_list *lst, t_ftiter ft);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_map(t_list *lst, t_ftmap ft, t_ftdel del);
t_list	*ft_lstnew(void *content);
void	ft_lstremove(t_list **lst, t_list *node, t_ftdel del);
t_list	*ft_lstselect(t_list *lst, unsigned int select);
int		ft_lstsize(t_list *lst);

#endif
