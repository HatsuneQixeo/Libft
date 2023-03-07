/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libalgo.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:49 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:17 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBALGO_H
# define LIBALGO_H

# include "libis.h"
# include <stdlib.h>

# define ITNAME_DEFAULT	"it"

typedef const char	*(*t_ftsetname)(const char *name);
const char	*iteri_name(const char *newname);

typedef void		(*t_ftdel)(void *content);

typedef void		(*t_ftiteri)(unsigned int i, void *content);
void		iteri_putendl(unsigned int i, void *p_str);
void		iteri_showstr(unsigned int i, void *p_str);
void		iteri_showaddress(unsigned int i, void *p_ptr);

typedef void		*(*t_ftmap)(void *content);
void		*map_copy(void *content);
void		*map_strdup(void *content);

typedef int			(*t_ftfind)(unsigned int i, const void *arr,
			const void *ref);

void		sort_insertion(void *begin, size_t len, size_t data_size,
				t_ftcmp ft_swapif);

#endif
