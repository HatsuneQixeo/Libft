#include "libft.h"

size_t	ft_strchr_countset(const char *str, const char *set)
{
	size_t	count;

	count = 0;
	if (!str || !set)
		return (0);
	else if (!*set)
		return (1);
	while (*str)
		if (ft_strchr(set, *str++))
			count++;
	return (count);
}
