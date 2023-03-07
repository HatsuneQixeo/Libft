/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   variadic_lexer.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/19 18:54:37 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:10 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/**
 * @brief Variadic argument lexer?
 * 
 * @param src 
 * @return t_list* 
 */

/**
 * @brief Need to sort base on the length too
 * Let's not
 * 
 * @param src 
 * @param delimiter_count 
 * @param ... 
 * @return t_list* 
 */
t_list	*ms_varlexer(const char *src, int delimiter_count, ...)
{
	va_list	args;

	va_start(args, delimiter_count);
	while (delimiter_count--)
	{
		char	*arg = va_arg(args, char *);
		ft_printf("arg: %s\n", arg);
	}
	va_end(args);
	return (NULL);
	(void)src;
}

int	main(void)
{
	t_list	*lst_token;

	lst_token = ms_varlexer("echo Hatsune Miku >> ioas", 4, ">>", "<<", ">", "<");
}
