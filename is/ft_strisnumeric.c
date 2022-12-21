#include "libft.h"

int	ft_strisnumeric(const char *str)
{
	if (*str == '-' || *str == '+')
		str++;
	if (*str == '\0')
		return (0);
	while (ft_isdigit(*str))
		str++;
	return (*str == '\0');
}
