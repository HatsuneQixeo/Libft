/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libmath.h                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:49 by hqixeo            #+#    #+#             */
/*   Updated: 2023/04/10 02:27:57 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBMATH_H
# define LIBMATH_H

# include <stdlib.h>

int		ft_nbrsize(size_t nbr);

int		ft_max(int a, int b);
int		ft_min(int a, int b);

double	ft_dmax(double a, double b);
double	ft_dmin(double a, double b);

size_t	ft_min_sizet(size_t a, size_t b);

int		ft_within(int min, int nbr, int max);

#endif
