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

# ifndef SAN
#  define SAN	1
# endif

/* Sorting */
void    sort_insertion(void *begin, size_t len, size_t data_size,
			t_ftcmp ft_cmp);
void    ft_lstsort_merge(t_list *const begin, t_list *const end,
			t_ftcmp ft_cmp);

/* Io with certain side effect */
char	*ft_prompt(const char *prompt);
void	ft_assert(const int condition, const char *message);

#endif
