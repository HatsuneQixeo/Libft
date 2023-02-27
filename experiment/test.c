/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:04:01 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/27 10:59:56 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>
#include <stdio.h>
// #include "../../pipex.h"

char	*ft_strprintable_sign(const char *src);
typedef int (*t_ftput)(const char *, int);

/* Index shenanigans
** Think I found this too in a cpp tutorial
*/
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

/* Envp
** It is allocated on stack, meaning modification is allowed, but free is not
*/
// int	main(int argc, char **argv, char **envp)
// {
// 	ft_strlistiteri(envp, iteristr_showstr);
// 	*(envp + 1) = NULL;
// 	ft_strlistiteri(envp, iteristr_showstr);
// 	free(*envp);
// }

/**
 * @brief perror
 * 
 */
// int	main(void)
// {
// 	// open("Miku existence", O_RDONLY);
// 	execve("ASD", NULL, NULL);
// 	ft_dprintf(2, "bash: ");
// 	perror("Miku existence");
// }

// int	main(int argc, char **argv, char **envp)
// {
// 	execve("/bin/zsh", argv, envp);
// }

// int	main(void)
// {
// 	void	*ptr;

// 	ptr = ft_strprintable_sign;
// }

/* Not tested just yet */
void	ft_lstinsert(t_list **lst, t_list *insert)
{
	t_list	*second_half;

	if (insert == NULL)
		return ;
	else if (*lst == NULL)
	{
		*lst = insert;
		return ;
	}
	second_half = (*lst)->next;
	(*lst)->next = insert;
	ft_lstadd_back(lst, second_half);
}

/*
	Only calling strlcat once per loop
	but need extra space for storing joined delimiter and src
*/
char	*ft_strmultiply(const char *src, const char *delimiter, unsigned int amount)
{
	char			*str;
	char			*str_joined;
	const size_t	src_len = ft_strlen(src);
	const size_t	total_len = src_len * amount
				+ (ft_strlen(delimiter) * (amount - 1));

	if (amount == 0 || total_len == 0)
		return (ft_strdup(""));
	else if (amount == 1)
		return (ft_strdup(src));
	str_joined = ft_strjoin(delimiter, src);
	if (str_joined == NULL)
		return (NULL);
	str = malloc(total_len + 1);
	if (str == NULL)
	{
		free(str_joined);
		return (NULL);
	}
	ft_strlcpy(str, src, src_len + 1);
	while (--amount)
		ft_strlcat(str, str_joined, total_len + 1);
	free(str_joined);
	return (str);
}
/* Calling strlcat twice but without memory allocation for anything else */
// char	*ft_strmultiply(const char *src, const char *delimiter, unsigned int amount)
// {
// 	char			*str;
// 	const size_t	src_len = ft_strlen(src);
// 	const size_t	total_len = src_len * amount
// 				+ (ft_strlen(delimiter) * (amount - 1));

// 	if (amount == 0 || total_len == 0)
// 		return (ft_strdup(""));
// 	else if (amount == 1)
// 		return (ft_strdup(src));
// 	str = malloc(total_len + 1);
// 	if (str == NULL)
// 		return (NULL);
// 	ft_strlcpy(str, src, src_len + 1);
// 	while (--amount)
// 	{
// 		ft_strlcat(str, delimiter, total_len + 1);
// 		ft_strlcat(str, src, total_len + 1);
// 	}
// 	return (str);
// }

// int	main(void)
// {
// 	t_list	*lst;
// 	char	**aa;

// 	lst = NULL;
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("Miku")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("is")));
// 	ft_lstadd_back(&lst, ft_lstnew(ft_strdup("cute")));
// 	aa = (char **)ft_lsttoaa_clear(&lst);
// 	ft_strlistiteri(aa, iteristr_showstr);
// 	system("leaks -q test.miku");
// }
