#include "libft.h"

void	lstiter_showstr(int i, void *content)
{
	ft_printf("lst[%d]: %s\n", i, content);
}

void	lstiter_showaddress(int i, void *content)
{
	ft_printf("lst[%d]: %p\n", i, content);
}
