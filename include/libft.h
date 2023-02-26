/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:08:16 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/26 19:11:20 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <errno.h>
# include "ansi.h"
# include "libis.h"
# include "libstring.h"
# include "get_next_line.h"
# include "libalgo.h"
# include "libto.h"
# include "ft_printf.h"
# include "liblinked_list.h"
# include "lib2darray.h"

typedef const char	*(*t_ftsetname)(const char *name);

/* Callback Functions */
char	mapi_capitalize(unsigned int i, char c);
char	mapi_lower(unsigned int i, char c);
char	mapi_miku(unsigned int i, char c);
char	mapi_upper(unsigned int i, char c);

void	iteri_lower(unsigned int i, char *str);
void	iteri_upper(unsigned int i, char *str);

void	lstshow_tmpname(t_list *lst, t_ftsetname ft_setname,
			const char *tmpname, t_ftiter ft_debug);

#endif
