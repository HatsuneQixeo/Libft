#include "libft.h"

char	*ft_strinsert(const char *first, const char *insert, const char *last)
{
	char	*str;
	size_t	len;

	if (!first || !insert || !last)
		return (0);
	else if ((first + ft_strlen(first) - ft_strlen(last)) != last)
		return (ft_strmodify(ft_strjoin(first, insert), last, ft_strjoin));
	else if (first >= last)
		return (0);
	len = ft_strlen(first) + ft_strlen(insert) + 1;
	str = malloc(len);
	if (!str)
		return (0);
	ft_strlcpy(str, first, last - first + 1);
	ft_strlcat(str, insert, len);
	ft_strlcat(str, last, len);
	return (str);
}
