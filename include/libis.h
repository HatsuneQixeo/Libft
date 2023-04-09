/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libis.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:49 by hqixeo            #+#    #+#             */
/*   Updated: 2023/04/10 02:27:57 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBIS_H
# define LIBIS_H

typedef int	(*t_ftis)(int c);
/* Is */
int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);

int		stris_only(const char *str, t_ftis ft_is);
typedef int	(*t_ftstris)(const char *str);
int		stris_numeric(const char *str);

typedef int	(*t_ftcmp)(const void *ref1, const void *ref2);
int		cmp_strlesser(const void *str1, const void *str2);
int		cmp_strgreater(const void *str1, const void *str2);
int		cmp_strprefix(const void *str, const void *prefix);
int		cmp_strsuffix(const void *str, const void *suffix);

#endif
