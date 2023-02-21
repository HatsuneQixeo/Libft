#include "libft.h"

t_list	*ft_lstextract_front(t_list **lst)
{
	t_list	*node;

	if (*lst == NULL)
		return (NULL);
	node = *lst;
	(*lst) = (*lst)->next;
	node->next = NULL;
	return (node);
}
