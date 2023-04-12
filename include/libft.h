/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:08:16 by hqixeo            #+#    #+#             */
/*   Updated: 2023/04/10 02:27:57 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include "ansi.h"
# include "libis.h"
# include "libstring.h"
# include "get_next_line.h"
# include "libalgo.h"
# include "libto.h"
# include "ft_printf.h"
# include "liblinked_list.h"
# include "lib2darray.h"
# include <assert.h>

char	*ft_prompt(const char *prompt);
void	ft_assert(const int condition, const char *message);

#endif
