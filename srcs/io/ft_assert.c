#include "ft_printf.h"

void	ft_assert(const int condition, const char *message)
{
	if (condition)
		return ;
	ft_dprintf(STDERR_FILENO, "Assertion failed: %s\n", message);
	exit(EXIT_FAILURE);
}
