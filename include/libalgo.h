/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libalgo.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:49 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/26 19:11:20 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBALGO_H
# define LIBALGO_H

# include "libis.h"
# include <stdlib.h>

typedef void	(*t_ftiter)(int i, void *content);
typedef void	*(*t_ftmap)(void *content);
typedef void	(*t_ftdel)(void *content);

const char	*iteri_name(const char *newname);
void		iteri_putendl(int i, void *str);
void		iteri_showstr(int i, void *str);
void		iteri_showaddress(int i, void *ptr);

void		*map_copy(void *content);
void		*map_strdup(void *content);

void		sort_insertion(void *begin, size_t len, size_t data_size,
			t_ftcmpis ft_swapif);

#endif
