/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   exitstatus.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/28 10:04:01 by hqixeo            #+#    #+#             */
/*   Updated: 2023/04/10 02:27:49 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>
#include <sys/wait.h>

static int	error_status(void)
{
	pid_t	pid;
	int		status;

	status = 0;
	pid = fork();
	if (pid == -1)
	{
		perror("fork");
		exit(EXIT_FAILURE);
	}
	else if (pid == 0)
	{
		execve("/bin/deaaaaa", NULL, NULL);
		perror("/bin/deaaaaa");
		exit(127);
	}
	else
		waitpid(pid, &status, 0);
	return (status);
}


// WEXITSTATUS()
int	main(void)
{
	int	status;

	status = error_status();
	printf("status: %x\n", status);
	printf("status >> 8	: %x\n", status >> 8);
	printf("status << 8	: %x\n", status << 8);
	printf("status / 0x100	: %x\n", status / 0x100);
	printf("status * 0x100	: %x\n", status * 0x100);
}
