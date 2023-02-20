/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   access_return.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 00:49:16 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:19 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	main(int argc, char **argv, char **envp)
{
	while (*++argv != NULL)
	{
		printf("accessingF: (%s) result in (%d)\n", *argv, access(*argv, F_OK));
		perror("access");
		printf("errno: %d\n", errno);
		printf("accessingX: (%s) result in (%d)\n", *argv, access(*argv, X_OK));
		perror("access");
		printf("errno: %d\n", errno);
		printf("accessingFX: (%s) result in (%d)\n", *argv, access(*argv, F_OK | X_OK));
		perror("access");
		printf("errno: %d\n", errno);
	}
}
