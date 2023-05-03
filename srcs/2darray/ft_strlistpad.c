#include "lib2darray.h"

/* Gonna ask chatGPT about it's opinion */
// void	ft_strlistpad(char **strlist, t_ftstrpad ft_strpad)
// {
// 	const size_t	longest = ft_strlistfind_longest(strlist);
// 	size_t			i;
// 	char			*tmp;

// 	i = -1;
// 	while (strlist[++i] != NULL)
// 	{
// 		tmp = ft_strpad(strlist[i], longest);
// 		free(strlist[i]);
// 		strlist[i] = tmp;
// 	}
// }

char	**ft_strlistpad(char **strlist, t_ftstrpad ft_strpad, const char c)
{
	char *const	longest = *ft_strlistfind_longest(strlist);
	size_t		len_longest;
	char		**newlist;
	size_t		i;

	if (longest == NULL)
		return (ft_strlistdup(strlist));
	newlist = malloc((ft_strcount(strlist) + 1) * sizeof(char *));
	if (newlist == NULL)
		return (NULL);
	len_longest = ft_strlen(longest);
	i = -1;
	while (strlist[++i] != NULL)
	{
		newlist[i] = ft_strpad(strlist[i], len_longest, c);
		if (newlist[i] == NULL)
		{
			ft_strlistclear(newlist);
			return (NULL);
		}
	}
	newlist[i] = NULL;
	return (newlist);
}
