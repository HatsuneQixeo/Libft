#include "lib2darray.h"

char	**ft_strlistfind_longest(char **strlist)
{
	return ((char **)ft_aafind_max((void **)strlist, cmp_strlen));
}
