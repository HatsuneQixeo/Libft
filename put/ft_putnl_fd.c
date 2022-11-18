/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnl_fd.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/10 05:26:07 by hqixeo            #+#    #+#             */
/*   Updated: 2022/10/10 05:26:08 by hqixeo           ###   ########.fr       */
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
