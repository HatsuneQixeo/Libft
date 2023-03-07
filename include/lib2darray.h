/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lib2darray.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:49 by hqixeo            #+#    #+#             */
/*   Updated: 2023/03/07 15:22:17 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIB2DARRAY_H
# define LIB2DARRAY_H

# include "libalgo.h"
# include "libstring.h"

int		ft_aasize(void **aa);
int		ft_strcount(char **strlist);

void	ft_aaclear(void **aa, t_ftdel del);
void	ft_strlistclear(char **strlist);

char	**ft_strlistcombine(char **srclist1, char **srclist2);

void	**ft_aafind(void **aa, const void *ref, t_ftcmp ft_cmp);
char	**ft_strlistfind_prefix(char **strlist, const char *prefix);

void	ft_strlistiteri(char **strlist, t_ftiteri ft_iter);

void	ft_strlistmod(char **strlist, const char *mod, t_modifier ft_str);

void	**ft_aamap(void **src, t_ftmap ft_map);
char	**ft_strlistdup(char **strlist);

void	ft_aaremove(void **aa, t_ftcmp ft_cmp, const void *ref, t_ftdel ft_del);

#endif
