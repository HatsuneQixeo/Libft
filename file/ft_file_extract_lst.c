/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_file_extract_lst.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/29 00:38:28 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/19 19:06:21 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

//Convert the file content in given file to 2d array(malloc)
//Note: This function trim away every '\n', while keeping empty lines
char	**ft_file_extract_lst(int fd)
{
	t_list	*lst;
	char	*str_part;
	char	**strlist;

	lst = 0;
	str_part = get_next_line(fd);
	while (str_part)
	{
		ft_lstadd_back(&lst, ft_lstnew(str_part));
		str_part = get_next_line(fd);
	}
	strlist = (char **)ft_lsttoaa_clear(&lst);
	ft_strlistmod(strlist, "\n", ft_strtrim);
	return (strlist);
}
