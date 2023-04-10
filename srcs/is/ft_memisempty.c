#include <stdlib.h>

/* Maybe someday? */
int	ft_memisempty(const void *ptr, const size_t bytes)
{
	const unsigned char	*begin = ptr;
	const unsigned char	*end = begin + bytes;

	while (begin != end && *begin == '\0')
		begin++;
	return (begin == end);
}
