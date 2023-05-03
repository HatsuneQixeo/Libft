#include "liblinked_list.h"

void	del_shallowlist(void *list)
{
	t_list	*lst;

	lst = list;
	ft_lstclear(&lst, NULL);
}
