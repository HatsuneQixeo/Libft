#include "libft.h"

/* Not tested just yet */
void	ft_lstinsert(t_list **lst, t_list *insert)
{
	t_list	*second_half;

	if (insert == NULL)
		return ;
	else if (*lst == NULL)
	{
		*lst = insert;
		return ;
	}
	second_half = (*lst)->next;
	(*lst)->next = insert;
	ft_lstadd_back(lst, second_half);
}
