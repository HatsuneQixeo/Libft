#include "liblinked_list.h"

void	ft_lstreverse(t_list **lst)
{
	t_list	*it;
	t_list	*prev;
	t_list	*next;

	prev = NULL;
	it = *lst;
	if (it == NULL)
		return ;
	while (it->next != NULL)
	{
		next = it->next;
		it->next = prev;
		prev = it;
		it = next;
	}
	it->next = prev;
	*lst = it;
}
