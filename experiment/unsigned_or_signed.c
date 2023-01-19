#include <limits.h>

#define limit	UINT_MAX
// Unsigned (8.77 - 8.95)
int	main(void)
{
	for (long i = 1; i < limit; i++)
		if ((unsigned long)i > LONG_MAX);
}

// Signed (10) +-
// int	main(void)
// {
// 	for (long i = 1; i < limit; i++)
// 		if (i < 0 || i > LONG_MAX);
// }

// Unsigned variable (casting does not seem to degrade in performance)
// int	main(void)
// {
// 	for (unsigned long i = 1; i < limit; i++)
// 		if (i > LONG_MAX);
// }
