#include "libft.h"
#include <string.h>
#include <stdio.h>
// #include "../../pipex.h"
char	*ft_strprintable_sign(const char *src);
typedef int (*t_put)(const char *, int);

//Does not handle backslash
void	ft_quote(char **strlist)
{
	char	*str_quote;

	if (!strlist)
		return ;
	while (*strlist)
	{
		str_quote = ft_strchr(*strlist, '\'');
		while (str_quote && !ft_strchr(str_quote + 1, '\'') && *(strlist + 1))
		{
			*strlist = ft_strmodify(*strlist, " ", ft_strjoin);
			*strlist = ft_strcombine(*strlist, *(strlist + 1));
			ft_memmove(strlist + 1, strlist + 2,
				(ft_strcount(strlist + 2) + 1) * sizeof(char *));
			str_quote = ft_strchr(*strlist, '\'');
		}
		strlist++;
	}
}

// int	main(void)
// {
// 	char	**strlist;

// 	strlist = ft_split("'Hatsune Miku' is cute", ' ');
// 	ft_printf("aftersplit\n");
// 	ft_putstrlist_fd(strlist, 1);
// 	ft_joinquote(strlist);
// 	ft_printf("afterjoin\n");
// 	ft_putstrlist_fd(strlist, 1);
// 	system("leaks -q test.miku");
// }

// Index
// int main(void)
// {
// 	char *str = strdup("1bcde");

// 	printf("%c\n", str[2]);
// 	printf("%c\n", *(str + 2));
// 	printf("%c\n", *(2 + str));
// 	printf("%c\n", 2[str]);
// 	printf("%c\n", 3[str]);
// 	printf("%c\n", 4[str]);
// 	printf("%c\n", *str + 2);
// }
