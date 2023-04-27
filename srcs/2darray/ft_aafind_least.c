#include "lib2darray.h"

void	**ft_aafind_least(void **aa, t_ftcmp cmp)
{
	void			**least;
	unsigned int	i;

	least = aa;
	i = -1;
	while (aa[++i] != NULL)
	{
		if (cmp(*least, aa[i]) > 0)
			least = &aa[i];
	}
	return (least);
}
