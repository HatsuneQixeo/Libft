#include "libft.h"

//float makes literally no sense
// {
	// int	main(void)
	// {
	// 	printf("1.1:%%f:		%f\n", 1.1);
	// 	printf("1.1:%%.f:	%.f\n", 1.1);
	// 	printf("1.4:%%.f:	%.f\n", 1.4);
	// 	printf("1.5:%%.f:	%.f\n", 1.5);
	// 	printf("1.55:%%.f:	%.f\n", 1.55);
	// 	printf("1.45:%%.f:	%.f\n", 1.45);
	// 	printf("1.5555555:%%.f:	%.f\n", 1.5555555);
	// 	printf("1.13456789:%%.f:	%.f\n", 1.13456789);
	// 	printf("1.1: %%.6f	%.6f\n", 1.1);
	// 	printf("1.1: %%.99f	%.99f\n", 1.1);
	// 	float	i;

	// 	i = 1;
	// 	printf("%.f\n", i);
	// 	// printf("%.10f\n", i += .123456789);
	// 	// printf("%.10f\n", i + .123456789);
	// 	ft_printf("i as d: %d\n", i);
	// 	ft_memprint(&i, 4, 4);
	// 	// while (i += .1)
	// 	// {
	// 	// 	printf("%.10f\n", i);
	// 	// 	ft_printf("i as d: %d\n", i);
	// 	// 	ft_memprint(&i, 4, 4);
	// 	// }
	// }
// }

//Star flag
// {
	// int	main(void)
	// {
	// 	ft_printf("ft_printf:	(%.*d)\n", 7, 831);
	// 	printf("printf:		(%.*d)\n", 7, 831);
	// 	ft_printf("ft_printf:	(%.*d)\n", -7, 831);
	// 	printf("printf:		(%.*d)\n", -7, 831);
	// 	ft_printf("ft_printf:	(%*d)\n", -7, 831);
	// 	printf("printf:		(%*d)\n", -7, 831);
	// 	ft_printf("ft_printf:	(%*d)\n", 7, 831);
	// 	printf("printf:		(%*d)\n", 7, 831);
	// 	ft_printf("ft_printf:	(%.*s)\n", 7, "Hatsune Miku");
	// 	printf("printf:		(%.*s)\n", 7, "Hatsune Miku");
	// 	ft_printf("ft_printf:	(%.*s)\n", -7, "Hatsune Miku");
	// 	printf("printf:		(%.*s)\n", -7, "Hatsune Miku");
	// 	// printf("(%.*d)\n", 7, 831);
	// 	// printf("(%.*-7d)\n", -7, 831);
	// 	// printf("(%*d)\n", -7, 831);
	// 	// printf("(%.*.4d)\n", -7, -831);
	// // 	printf("(%*d)\n", 7, 831);
	// // 	printf("(%-*d)\n", 7, 831);
	// // 	printf("(%*--d)\n", -7, 831);
	// }
// }

//Added b conversion
int	main(void)
{
	ft_printf("%b\n", "Hatsune Miku\n");
	ft_printf("%.12b\n", "Hatsune Miku\n");
	ft_printf("%.13b\n", "Hatsune Miku\n");
	ft_printf("%.13b\n", "Hatsune Miku\n\n");
	ft_printf("%.14b\n", "Hatsune Miku\n\n");
	ft_printf("%.14b\n", "Hatsune Miku\n\n\n");
	system("leaks -q printf_related.miku");
}

typedef struct print
{
	char	*str;
	size_t	len;
}			t_print;

size_t	ft_lentotal(t_list *lst)
{
	size_t	sum;

	sum = 0;
	while (lst)
	{
		sum += ((t_print *)lst->content)->len;
		lst = lst->next;
	}
	return (sum);
}

void	ft_freeprint(void *content)
{
	free(((t_print *)content)->str);
}

int	ft_printall(t_list *lst, int fd)
{
	char	*str_all;
	size_t	len_all;
	size_t	len_tmp;

	len_all = ft_lentotal(lst);
	str_all = malloc(len_all);
	while (lst)
	{
		len_tmp = ((t_print *)lst->content)->len;
		ft_memcpy(str_all, ((t_print *)lst->content)->str, len_tmp);
		str_all += len_tmp;
		lst = lst->next;
	}
	write(fd, str_all - len_all, len_all);
	free(str_all);
	ft_lstclear(&lst, ft_freeprint);
	return (len_all);
}
