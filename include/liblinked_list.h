/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   liblinked_list.h                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:49 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:17 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBLINKED_LIST_H
# define LIBLINKED_LIST_H

# include "libalgo.h"
# include <stdlib.h>

# define LSTNAME_DEFAULT	"lst"

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

typedef void	(*t_ftiterlst)(void *content);

/* Linked list */
t_list		*ft_lstnew(void *content);

void		ft_lstadd_back(t_list **lst, t_list *add);
void		ft_lstadd_front(t_list **lst, t_list *add);

t_list		*ft_lstextract_front(t_list **lst);

void		ft_lstdelone(t_list *lst, t_ftdel del);
void		ft_lstclear(t_list **lst, t_ftdel del);

int			ft_lstsize(t_list *lst);
t_list		*ft_lstselect(t_list *lst, unsigned int select);
t_list		*ft_lstlast(t_list *lst);

void		ft_lstiter(t_list *lst, t_ftiterlst ft);
t_list		*ft_lstmap(t_list *lst, t_ftmap ft, t_ftdel del);

void		ft_lstremove(t_list **lst, t_list *node, t_ftdel del);
void		ft_lstremoveif(t_list **lst, const void *ref,
				t_ftcmp ft_cmp, t_ftdel ft_del);

const char	*lstshow_name(const char *newname);
void		lstshow_str(void *content);

#endif
