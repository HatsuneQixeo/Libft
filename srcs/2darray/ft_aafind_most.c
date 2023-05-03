#include "lib2darray.h"

void	**ft_aafind_most(void **aa, t_ftcmp cmp)
{
	void			**most;
	unsigned int	i;

	if (aa[0] == NULL)
		return (aa);
	most = aa;
	i = 0;
	while (aa[++i] != NULL)
	{
		if (cmp(*most, aa[i]) < 0)
			most = &aa[i];
	}
	return (most);
}

char	**ft_strlistfind_longest(char **strlist)
{
	return ((char **)ft_aafind_most((void **)strlist, cmp_strlen));
}
