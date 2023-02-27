/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   map_ft.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/01/30 17:07:50 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/27 10:59:57 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libstring.h"

/**
 * @brief A mapping function for making shallow copy (NO-OP)
 * 
 * @param content 
 * @note This function could be used for any data type if I'm not cracked
 * @return void* ) Return the given argument
 */
void	*map_copy(void *content)
{
	return (content);
}

/**
 * @brief A mapping function for making deep copy of string
 * 
 * @param content
 * @return void* ) A deep copy of content assuming it's a string
 */
void	*map_strdup(void *content)
{
	return (ft_strdup(content));
}
