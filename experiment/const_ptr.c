#include "libft.h"

int	main(void)
{
	char	add;
	char const	*ptr_to_const;
	const char	*ptr_to_const1;
	char *const	constptr = &add; 
	// *const char	constptr1;

	ptr_to_const = &add;
	ptr_to_const1 = &add;
	// constptr1 = &add;
	add = 'a';
	// Legal
	{
		ptr_to_const++;
		ptr_to_const1++;
		*constptr = 'a';
	}
	// Illegal
	{
		// constptr = &add;
		// *ptr_to_const = 'a';
		// *ptr_to_const1 = 'a';
		// constptr++;
	}
	// constptr1++;
}
