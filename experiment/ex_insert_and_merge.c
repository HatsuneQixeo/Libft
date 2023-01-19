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
// Cppinsert
char	*ft_strinsert_re(const char *str, size_t pos, const char *insert);
char	*ft_prompt(const char *prompt)
{
	ft_putstr_fd(prompt, 1);
	return (ft_strmodify(get_next_line(STDIN_FILENO), "\n", ft_strtrim));
}

// int	insert_prompt(char **input, size_t *pos, char **insert)
// {
// 	char	*tmp;

// 	*input = ft_prompt("CppInsert> ");
// 	if (*input == NULL)
// 		return (-1);
// 	tmp = ft_prompt("Pos> ");
// 	if (tmp == NULL)
// 		return (-1);
// 	*insert = ft_prompt("Insert> ");
// 	if (*insert == NULL)
// 		return (-1);
// 	*pos = ft_atoi(tmp);
// 	free(tmp);
// 	return (0);
// }

// int	main(void)
// {
// 	char	*input;
// 	char	*insert;
// 	size_t	pos;

// 	while (insert_prompt(&input, &pos, &insert) != -1)
// 	{
// 		char	*re = ft_strinsert_re(input, pos, insert);

// 		ft_printf("insert_re: %s\n", re);
// 		free(input);
// 		free(insert);
// 		free(re);
// 	}
// 	system("leaks -q ex_insert_and_merge.miku");
// }

char	*ft_strreplace(const char *src, const char *replace, size_t pos, size_t len_overwrite)
{
	char	*str;
	size_t	len_src;
	size_t	len_total;

	if (src == NULL || replace == NULL)
		return (NULL);
	len_src = ft_strlen(src);
	if (pos >= len_src)
		return (ft_strjoin(src, replace));
	len_overwrite = ft_min_sizet(len_overwrite, len_src - pos);
	len_total = len_src + (ft_strlen(replace) - len_overwrite) + 1;
	str = malloc(len_total);
	if (str == NULL)
		return (NULL);
	ft_strlcpy(str, src, pos + 1);
	ft_strlcat(str, replace, len_total);
	ft_strlcat(str, src + pos + len_overwrite, len_total);
	return (str);
}

#define PROMPT(ptr, prompt)	ptr = ft_prompt(prompt); if (ptr == NULL) return (-1);
int	replace_prompt(char **input, char **replace, size_t *pos, size_t *len_overwrite)
{
	char	*tmp;

	PROMPT(*input, "Cppreplace> ")
	PROMPT(*replace, "replace> ");
	PROMPT(tmp, "Pos> ")
	*pos = ft_atoi(tmp);
	free(tmp);
	PROMPT(tmp, "Len_overwrite> ")
	*len_overwrite = ft_atoi(tmp);
	free(tmp);
	return (0);
}

int	main(void)
{
	char	*input;
	char	*insert;
	size_t	pos;
	size_t	len_overwrite;

	while (replace_prompt(&input, &insert, &pos, &len_overwrite) != -1)
	{
		char	*re = ft_strreplace(input, insert, pos, len_overwrite);

		ft_printf("replace: (%s)\n", re);
		free(input);
		free(insert);
		free(re);
	}
	system("leaks -q ex_insert_and_merge.miku");
}
