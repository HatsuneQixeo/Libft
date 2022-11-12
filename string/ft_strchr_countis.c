#include "libft.h"

size_t	ft_strchr_countis(const char *str, int (ft_is)(int))
{
	size_t	count;

	if (!str || !ft_is)
		return (0);
	count = 0;
	str--;
	while (*++str)
		if (ft_is(*str))
			count++;
	return (count);
}
