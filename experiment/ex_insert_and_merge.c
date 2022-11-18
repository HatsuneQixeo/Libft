#include "libft.h"
#define MIKU	"Hatsune Miku"

static int	ft_stroverlap(const char *str1, const char *str2)
{
	if (!str1 || !str2)
		return (0);
	if (str1 < str2)
		while (*str1 && str1 != str2)
			str1++;
	else if (str1 > str2)
		while (*str2 && str2 != str1)
			str2++;
	return (str1 == str2);
}

//stroverlap
void	ft_printoverlap(const char *str1, const char *str2)
{
	ft_printf("str1: (%s)\n", str1);
	ft_printf("str2: (%s)\n", str2);
	ft_printf("stroverlap: %d\n\n", ft_stroverlap(str1, str2));
}

// int	main(void)
// {
// 	char	*miku;

// 	miku = "Hatsune Miku";
// 	ft_printoverlap(miku, ft_strstr(miku, "Miku"));
// 	ft_printoverlap(miku, "Miku");
// 	ft_printoverlap(miku, ft_strstr(miku, ""));
// 	ft_printoverlap(miku, "Hatsune Miku");
// 	ft_printoverlap(miku, ft_strchr(miku, 0));
// 	ft_printoverlap(miku, "");
// 	ft_printf("/////REVERSED/////\n");
// 	ft_printoverlap(ft_strstr(miku, "Miku"), miku);
// 	ft_printoverlap("Miku", miku);
// 	ft_printoverlap(ft_strstr(miku, ""), miku);
// 	ft_printoverlap("Hatsune Miku", miku);
// 	ft_printoverlap(ft_strchr(miku, 0), miku);
// 	ft_printoverlap("", miku);
// }

// Insert
static void	ft_printinsert(const char *first, const char *insert, const char *last)
{
	char	*str;

	str = ft_strinsert(first, insert, last);
	ft_printf("first:	(%s)\n", first);
	ft_printf("insert:	(%s)\n", insert);
	ft_printf("last:	(%s)\n", last);
	if (ft_stroverlap(first, last))
		ft_printf("Overlap: yes\n");
	else
		ft_printf("Overlap: no, len first copy: %d\n", last - first);
	ft_printf("str:	(%s)\n\n", str);
	free(str);
}

// int	main(void)
// {
// 	char	*miku;

// 	miku = "HatsuneMiku";
// 	ft_printinsert(miku, " ", ft_strstr(miku, "Miku"));
// 	ft_printinsert(ft_strstr(miku, "Miku"), " ", miku);
// 	ft_printinsert("Miku", " ", miku);
// 	ft_printinsert(miku, " ", "Miku");
// 	ft_printinsert("Hatsune", " ", "Miku");
// }

//This function takes in an allocated string as first argument
// and keep joining the rest of the string to the back
//Passing in only one argument is considered undefined behaviour
//#Fragile
char	*ft_strmerge(char *src, ...)
{
	va_list	args;
	char	*str_part;

	if (!src)
		return (0);
	va_start(args, src);
	str_part = va_arg(args, char *);
	while (str_part)
	{
		src = ft_strmodify(src, str_part, ft_strjoin);
		str_part = va_arg(args, char *);
	}
	va_end(args);
	return (src);
}

char	*testft_strmerge(char *src, va_list args)
{
	char	*str_part;

	str_part = va_arg(args, char *);
	if (!src)
		return (0);
	// ft_printf("add_src: %p\n", src);
	// ft_printf("src: %s\n", src);
	// ft_printf("\n");
	while (str_part)
	{
		// if (str_part == MIKU)
		// 	ft_printf("STR_PART FOUND MIKU NANI\n");
		// else
		// {
		// 	ft_printf("	add_str_part: %p\n", str_part);
		// 	ft_printf("	str_part: (%s)\n", str_part);
		// 	ft_printf("\n");
		// }
		src = ft_strmodify(src, str_part, ft_strjoin);
		str_part = va_arg(args, char *);
	}
	return (src);
}

static void	test_strmerge(char *src, ...)
{
	va_list	args;
	char	*merged;

	va_start(args, src);
	merged = testft_strmerge(src, args);
	ft_printf("strmerge: %s\n", merged);
	free(merged);
	va_end(args);
}

// int	main(void)
// {
// 	char	*asdmiku;

// 	asdmiku = ft_strdup("Miku");
// 	ft_printf("Hatsune Miku is now at: %p\n", MIKU);
// 	test_strmerge(ft_strdup("Hatsune"), " ", "Miku", " ", "is", " ", "love", " ", "Hatsune", " ", "Miku", " ", "is", " ", "live");
// 	test_strmerge(ft_strdup(MIKU));
// 	test_strmerge(ft_strdup(MIKU), 0);
// 	test_strmerge(ft_strdup("Hatsune"), " Miku");
// 	test_strmerge(0);
// 	//will crash
// 	// test_strmerge(asdmiku);
// 	system("leaks -q ex_insert_and_merge.miku");
// }
