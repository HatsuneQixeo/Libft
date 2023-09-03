#include "exlib.h"

void	test_sort(void)
{
	t_list	*lst;

	lst = NULL;
	ft_lstadd_front(&lst, ft_lstnew("Hatsune Miku"));
	ft_lstadd_front(&lst, ft_lstnew("is"));
	ft_lstadd_front(&lst, ft_lstnew("cute"));
	iter_name("add_front");
	ft_lstiter(lst, iter_showstr);

	ft_lstreverse(&lst);
	iter_name("After reverse");
	ft_lstiter(lst, iter_showstr);

	ft_lstsort_merge(lst, NULL, cmp_str);
	iter_name("After sort");
	ft_lstiter(lst, iter_showstr);

	ft_lstsort_merge(lst, NULL, cmp_strreverse);
	iter_name("After reverse sort");
	ft_lstiter(lst, iter_showstr);

	/* Incorrect usage of cmp_strsuffix, could result in undefined behaviour */
	ft_lstsort_merge(lst, NULL, cmp_strsuffix);
	iter_name("After suffix sort");
	ft_lstiter(lst, iter_showstr);

	ft_lstclear(&lst, NULL);
}

void	test_readfile(void)
{
	char	**strlist = ft_readfile("Makefile");

	iteri_name("readfile");
	ft_aaiteri(strlist, iteri_showstr);
	ft_strlistclear(strlist);
}

void	test_split(void)
{
	char	**strlist = ft_split("Hatsune Miku is cute", ' ');

	iteri_name("split");
	ft_aaiteri(strlist, iteri_showstr);
	ft_strlistclear(strlist);
}

void	test_strmerge(void)
{
	char	*str = ft_strmerge("%s is cute", "Hatsune Miku");

	ft_putendl_fd(str, 1);
	free(str);
}

int	main(void)
{
	test_sort();
	test_readfile();
	test_split();
	test_strmerge();
}
