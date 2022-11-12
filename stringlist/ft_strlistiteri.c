#include "libft.h"

void	ft_strlistiteri(char **strlist, const char *mod, t_ftstr ft_str)
{
	strlist--;
	while (*++strlist)
		*strlist = ft_strmodify(*strlist, mod, ft_str);
}
