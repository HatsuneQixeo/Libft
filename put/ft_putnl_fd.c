/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnl_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 05:26:07 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:30 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_putnl_fd(size_t amount, int fd)
{
	if (!amount)
		return (0);
	else if (amount == 1)
		return (ft_putchar_fd('\n', fd));
	return (ft_strrelease_fd(ft_strcreate('\n', amount), fd));
}
