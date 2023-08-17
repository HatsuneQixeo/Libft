#include "libft.h"

int	main(int argc, char **argv, char **envp)
{
	iteri_name("argv");
	ft_aaiteri(argv, iteri_showstr);
	iteri_name("envp");
	ft_aaiteri(envp, iteri_showstr);
	(void)argc;
}
