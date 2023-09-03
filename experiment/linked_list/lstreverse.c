#include "exlib.h"

int	main(void)
{
	t_list	*lst;

	lst = NULL;
	ft_lstadd_front(&lst, ft_lstnew("Hatsune Miku"));
	ft_lstadd_front(&lst, ft_lstnew("is"));
	ft_lstadd_front(&lst, ft_lstnew("cute"));
	ft_lstiter(lst, iter_showstr);
	ft_lstreverse(&lst);
	ft_lstiter(lst, iter_showstr);
	ft_lstclear(&lst, NULL);
}
