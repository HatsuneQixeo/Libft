/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libstring.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/02/26 18:52:49 by hqixeo            #+#    #+#             */
/*   Updated: 2023/02/26 19:11:20 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBSTRING_H
# define LIBSTRING_H

# include <string.h>
# include <stdlib.h>
# include "libis.h"
# include "libalgo.h"

typedef char	*(*t_modifier)(const char *str1, const char *str2);

char	*ft_strcreate(char set, size_t size);
/* Mem */
void	ft_bzero(void *str, size_t len);
void	*ft_calloc(size_t len, size_t size);
void	*ft_memchr(const void *str, int c, size_t bytes);
int		ft_memcmp(const void *str1, const void *str2, size_t bytes);
void	*ft_memcpy(void *dst, const void *src, size_t bytes);
void	*ft_memmove(void *dst, const void *src, size_t bytes);
void	*ft_memset(void *str, int c, size_t bytes);
void	ft_swapchar(char *sign, char *set);
void	ft_memswap(void *ptr1, void *ptr2, size_t bytes);
char	*ft_memprintable(const void *src, const char *base, size_t bytes);

/* String */
size_t	ft_strlen(const char *str);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlcat(char *dst, const char *src, size_t size);

char	*ft_strchr(const char *str, int c);
size_t	ft_strchr_countis(const char *str, t_ftis ft_is);
size_t	ft_strchr_countset(const char *str, const char *set);
char	*ft_strrchr(const char *str, int c);

int		ft_strcmp(const char *str1, const char *str2);
int		ft_strncmp(const char *str1, const char *str2, size_t n);

char	*ft_strstr(const char *str, const char *to_find);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);

char	*ft_strskip_chr(const char *str, char c);
char	*ft_strskip_is(const char *str, t_ftis ft_is);
char	*ft_strskip_set(const char *str, const char *set);

char	*ft_strdup(const char *str1);
char	*ft_substr(const char *str, unsigned int home, size_t len);
char	*ft_strtrim(const char *src, const char *set);
char	*ft_strinsert(const char *first, const char *insert, const char *last);
char	*ft_strmodify(t_modifier ft_str, char *src, const char *mod);
char	*ft_strcombine(char *str1, char *str2);
char	*ft_strmerge(const char *str_action, ...);

char	*ft_strjoin(const char *str1, const char *str2);
char	*ft_strrjoin(const char *str, const char *add);

void	ft_striteri(char *str, void (*ft)(unsigned int, char *));
char	*ft_strmapi(const char *str, char (*ft)(unsigned int, char));

char	*ft_strprintable(const char *src, const char *base);
char	*ft_strprintable_sign(const char *src);

char	**ft_split(const char *str, char c);
char	**ft_split_is(const char *str, t_ftis ft_is);

char	*strmod_clear(const char *str_clear, const char *str_void);
char	*strmod_realloc(const char *src, const char *str_void);
char	*strmod_strstrdup(const char *src, const char *find);
char	*strmod_substr(const char *src, const char *src_end);

#endif
