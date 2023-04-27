#include "libstring.h"

/**
 * @brief Makes a duplicate of the given data of given size in heap
 * (Shallow Copy)
 * 
 * @param data 
 * @param size 
 * @return void* 
 */
void	*ft_memnew(const void *data, const size_t size)
{
	void	*ptr;

	ptr = malloc(size);
	if (ptr == NULL)
		return (NULL);
	return (ft_memcpy(ptr, data, size));
}
