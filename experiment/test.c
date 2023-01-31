/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:04:01 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:28 by hqixeo           ###   ########.fr       */
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
