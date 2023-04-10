#include "ft_printf.h"

void	ft_assert(const int condition, const char *message)
{
	if (condition)
		return ;
	ft_dprintf(2, "Assertion failed: %s\n", message);
	exit(1);
}
