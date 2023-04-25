#include <stdlib.h>

/* Maybe someday? */
int	ft_memisempty(const void *ptr, const size_t bytes)
{
	const char	*begin = ptr;
	const char	*end = begin + bytes;

	while (begin != end && *begin == 0b0)
		begin++;
	return (begin == end);
}
