/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib2darray.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:49 by hqixeo            #+#    #+#             */
/*   Updated: 2023/04/10 02:27:56 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIB2DARRAY_H
# define LIB2DARRAY_H

# include "libalgo.h"
# include "libstring.h"

/* Size */
int		ft_aasize(void **aa);
int		ft_strcount(char **strlist);

/* Clear */
void	ft_aaclear(void **aa, t_ftdel del);
void	ft_strlistclear(char **strlist);

char	**ft_strlistcombine(char **srclist1, char **srclist2);

/* Search */
void	**ft_aafind(void **aa, const void *ref, t_ftcmp ft_cmp);
void	**ft_aafind_least(void **aa, t_ftcmp cmp);
void	**ft_aafind_most(void **aa, t_ftcmp cmp);
char	**ft_strlistfind_prefix(char **strlist, const char *prefix);
char	**ft_strlistfind_longest(char **strlist);

/* Iteri */
void	ft_strlistiteri(char **strlist, t_ftiteri ft_iter);
void	ft_strlistmod(char **strlist, const char *mod, t_modifier ft_str);

/* Map */
void	**ft_aamap(void **src, t_ftmap ft_map);
void	**ft_aarenew(void **src);
char	**ft_strlistdup(char **strlist);

/* Remove */
void	ft_aaremove(void **aa, t_ftcmp ft_cmp, const void *ref, t_ftdel ft_del);

#endif
