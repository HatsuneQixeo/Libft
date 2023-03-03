#include "libft.h"
#include <dirent.h>
#include <libc.h>

void	showdir(void *dirent)
{
	const struct dirent	*pdirent = dirent;

	printf("ino: %llu\n", (__uint64_t)pdirent->d_ino);			/* file number of entry */
	printf("seekoff: %llu\n", (__uint64_t)pdirent->d_seekoff);	/* seek offset (optional, used by servers) */
	printf("reclen: %u\n", (__uint16_t)pdirent->d_reclen);		/* length of this record */
	printf("namelen: %u\n", (__uint16_t)pdirent->d_namlen);		/* length of string in d_name */
	printf("type: %u\n", (__uint8_t)pdirent->d_type);			/* file type, see below */
	printf("name: %s\n", (char *)pdirent->d_name);				/* entry name (up to MAXPATHLEN{1024 (+1 depends on os?)} bytes) */
	printf("\n");
}

char	**dir_content(const char *path)
{
	t_list			*lst_buffer;
	DIR				*dir;
	struct dirent	*dirent;

	dir = opendir(path);
	lst_buffer = NULL;
	if (dir == NULL)
	{
		perror(path);
		return (NULL);
	}
	while (1)
	{
		dirent = readdir(dir);
		if (dirent == NULL)
			break ;
		// showdir(dirent);
		ft_lstadd_back(&lst_buffer, ft_lstnew(dirent->d_name));
	}
	closedir(dir);
	return ((char **)ft_lsttoaa_clear(&lst_buffer));
}


/*
	*.*	: 
	.*	: 
	*.	: ignores .git .gitignore, basically ignores if nothing's in front
	Change of plan, The list will be assumed to be like follow:
	(str) || (wildcard str)
	(wildcard str)
	(wildcard str)
	(wildcard str)

	Or maybe?: This is better, the lexing will be easier too
	(wildcard nothing str) || (wildcard something str)
	(wildcard str)
	(wildcard str)
	(wildcard str)
*/
int	it_match(t_list *lst_pattern, const char *str)
{
	const char	*str_content = lst_pattern->content;
	const char	*find = ft_strstr(str, str_content);

	if ((find == str && str_content[0] != '\0') || find == NULL)
		return (-1);
	while (lst_pattern != NULL && find != NULL)
	{
		str_content = lst_pattern->content;
		find = ft_strstr(find, str_content);
		if (find == NULL)
			return (-1);
		find += ft_strlen(str_content);
		lst_pattern = lst_pattern->next;
	}
	return (0);
}

// int	pattern_matching(t_list *lst_pattern, const char *str)
// {
// 	const char	*str_content;

// 	if (str == NULL)
// 		return (-1);
// 	else if (lst_pattern == NULL)
// 	{

// 		return (0);
// 	}
// 	str_content = lst_pattern->content;
// 	/*
// 		Need a more reliable way of differenciating
// 			asterisk character and wildcard operator
// 	*/
// 	if (!ft_strcmp(str_content, "*"))
// 	{
// 		if (lst_pattern->next == NULL)
// 			return (0);
// 		const char	*next_content = lst_pattern->next->content;
// 		/*
// 			Might need a while loop to discard all duplicate wildcard operator
// 			if the given list is not unique
// 		*/

// 		return (pattern_matching(lst_pattern->next->next, ft_strstr(str, next_content)));
// 	}
// 	else
// 	{
// 		if (cmp_strprefix(str, str_content))
// 			return (-1);
// 		printf("str: %s\n", str);
// 		printf("str_content: %s\n", str_content);
// 		return (pattern_matching(lst_pattern->next, str + ft_strlen(str_content)));
// 	}
// }

char	**wildcard(t_list *lst_pattern)
{
	char	**strlist_content;

	strlist_content = dir_content(".");
	ft_strlistiteri(strlist_content, iteri_showstr);
	for (unsigned int i = 0; strlist_content[i] != NULL; i++)
	{
		const char	*msg;

		if (it_match(lst_pattern, strlist_content[i]) == -1)
			msg = RED"Not Matched"DEF;
		else
			msg = GREEN"Matched"DEF;
		ft_printf("%-18s is %s\n", strlist_content[i], msg);
	}
	free(strlist_content);
	return (NULL);
	(void)lst_pattern;
}

int	main(void)
{
	char	**strlist_matched;
	t_list	*lst_pattern;

	lst_pattern = NULL;
	ft_lstadd_back(&lst_pattern, ft_lstnew(""));
	ft_lstadd_back(&lst_pattern, ft_lstnew("."));
	// ft_lstadd_back(&lst_pattern, ft_lstnew("."));
	strlist_matched = wildcard(lst_pattern);
	if (strlist_matched == NULL)
	{
		system("leaks -q wildcard.miku");
		return (1);
	}
	ft_strlistiteri(strlist_matched, iteri_showstr);
	ft_lstclear(&lst_pattern, NULL);
	system("leaks -q wildcard.miku");
}
