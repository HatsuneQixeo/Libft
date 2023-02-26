/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libis.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:49 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/26 19:11:20 by hqixeo           ###   ########.fr       */
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
int		ft_strisnumeric(const char *str);
int		stris_only(const char *str, t_ftis ft_is);

typedef int	(*t_ftcmpis)(const void *p_ref1, const void *p_ref2);
int		cmpstr_islesser(const void *p_str1, const void *p_str2);
int		cmpstr_isgreater(const void *p_str1, const void *p_str2);
int		cmpstr_isprefix(const void *p_str, const void *p_prefix);

#endif
