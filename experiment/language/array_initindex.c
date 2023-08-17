#include "libft.h"

int	main(void)
{
	char	*strlist[] = {
		[2] = "Miku",
		[0] = "Hatsune",
		[1] = " ",
		[3] = NULL
	};

	ft_aaiteri(strlist, iteri_showstr);
}
