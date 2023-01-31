/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hqixeo <hqixeo@student.42kl.edu.my>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/07/05 15:08:16 by hqixeo            #+#    #+#             */
/*   Updated: 2023/01/31 18:02:33 by hqixeo           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#ifndef LIBFT_H
# define LIBFT_H

# include <stdio.h>
# include <stdlib.h>
# include <unistd.h>
# include <errno.h>
# include <string.h>
# include <limits.h>
# include "ft_printf.h"
# include "get_next_line.h"

typedef char	*(*t_modifier)(const char *str1, const char *str2);
typedef int		(*t_ftis)(int c);
typedef void	(*t_ftlstiter)(int i, void *content);
typedef void	*(*t_ftlstmap)(void *content);
typedef void	(*t_ftlstdel)(void *content);

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

char	*ft_file_extract(int fd);
int		ft_file_format(const char *file, const char *format);
int		ft_file_open(const char *file);

int		ft_nbrsize(size_t nbr);
int		ft_max(int a, int b);
int		ft_min(int a, int b);
size_t	ft_min_sizet(size_t a, size_t b);
int		ft_within(int min, int nbr, int max);

int		ft_isalnum(int c);
int		ft_isalpha(int c);
int		ft_isascii(int c);
int		ft_isdigit(int c);
int		ft_islower(int c);
int		ft_isprint(int c);
int		ft_isspace(int c);
int		ft_isupper(int c);
int		ft_strisnumeric(const char *str);

void	ft_lstadd_back(t_list **lst, t_list *new);
void	ft_lstadd_front(t_list **lst, t_list *new);
void	ft_lstclear(t_list **lst, t_ftlstdel del);
void	ft_lstdelone(t_list *lst, t_ftlstdel del);
void	ft_lstiter(t_list *lst, t_ftlstiter ft);
t_list	*ft_lstlast(t_list *lst);
t_list	*ft_lstmap(t_list *lst, t_ftlstmap ft, t_ftlstdel del);
t_list	*ft_lstnew(void *content);
t_list	*ft_lstselect(t_list *lst, unsigned int select);
int		ft_lstsize(t_list *lst);

void	ft_memprint(const void *ptr, size_t bytes, size_t data_size);
int		ft_putchar_fd(const char c, int fd);
int		ft_putendl_fd(const char *str, int fd);
int		ft_putnbr_fd(int n, int fd);
int		ft_putstr_fd(const char *str, int fd);
int		ft_strrelease_fd(char *str, int fd);

void	ft_bzero(void *str, size_t len);
void	*ft_calloc(size_t len, size_t size);
void	*ft_memchr(const void *str, int c, size_t bytes);
int		ft_memcmp(const void *str1, const void *str2, size_t bytes);
void	*ft_memcpy(void *dst, const void *src, size_t bytes);
void	*ft_memmove(void *dst, const void *src, size_t bytes);
char	*ft_memprintable(const void *src, const char *base, size_t bytes);
void	*ft_memset(void *str, int c, size_t bytes);
void	ft_memswap(void *ptr1, void *ptr2, size_t bytes);
char	**ft_split(const char *str, char c);
size_t	ft_strchr_countis(const char *str, int (ft_is)(int));
size_t	ft_strchr_countset(const char *str, const char *set);
char	*ft_strchr(const char *str, int c);
int		ft_strcmp(const char *str1, const char *str2);
char	*ft_strcombine(char *str1, char *str2);
char	*ft_strdup(const char *str1);
char	*ft_strinsert(const char *first, const char *insert, const char *last);
void	ft_striteri(char *str, void (*ft)(unsigned int, char *));
char	*ft_strrjoin(const char *str, const char *add);
char	*ft_strjoin(const char *str1, const char *str2);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t	ft_strlen(const char *str);
char	*ft_strmapi(const char *str, char (*ft)(unsigned int, char));
char	*ft_strmodify(t_modifier ft_str, char *src, const char *mod);
int		ft_strncmp(const char *str1, const char *str2, size_t n);
char	*ft_strnstr(const char *str, const char *to_find, size_t len);
char	*ft_strprintable_sign(const char *src);
char	*ft_strprintable(const char *src, const char *base);
char	*ft_strrchr(const char *str, int c);
char	*ft_strskip_chr(const char *str, char c);
char	*ft_strskip_is(const char *str, t_ftis ft_is);
char	*ft_strskip_set(const char *str, const char *set);
char	*ft_strstr(const char *str, const char *to_find);
char	*ft_strtrim(const char *src, const char *set);
char	*ft_substr(const char *str, unsigned int home, size_t len);

void	ft_strlistclear(char **strlist);
int		ft_strcount(char **strlist);
char	*ft_strlistchr(char **strlist, char c);
char	**ft_strlistcombine(char **srclist1, char **srclist2);
char	**ft_strlistdup(char **strlist);
char	**ft_strlistfind_prefix(char **strlist, const char *prefix);
void	ft_strlistiteri(char **strlist, void (*iteristr)(int, char *));
void	ft_strlistmod(char **strlist, const char *mod, t_modifier ft_str);
char	*ft_strliststr(char **strlist, const char *str);

void	ft_swapchar(char *sign, char *set);
char	*ft_strcreate(char set, size_t size);

int		ft_atoi(const char *str);
long	ft_atol(const char *str);
char	*ft_itoa(int n);
char	*ft_lltoa(long long n);
char	*ft_lsttoa(t_list *lst);
char	*ft_lsttoa_clear(t_list **lst);
char	**ft_lsttoaa(t_list *lst, t_ftlstmap ft_map);
char	**ft_lsttoaa_clear(t_list **lst);
int		ft_tolower(int c);
int		ft_toupper(int c);
char	*ft_utoa_base(uintptr_t un_n, const char *base);
int		ft_validbase(const char *base);

void	*lstmap_copy(void *content);
void	*lstmap_strdup(void *content);

void	lstiter_showstr(int i, void *content);
void	lstiter_showaddress(int i, void *content);

void	iteristr_putendl(int i, char *str);
void	iteristr_showstr(int i, char *str);
void	iteristr_showaddress(int i, char *str);

char	mapi_capitalize(unsigned int i, char c);
char	mapi_lower(unsigned int i, char c);
char	mapi_miku(unsigned int i, char c);
char	mapi_upper(unsigned int i, char c);

void	iteri_lower(unsigned int i, char *str);
void	iteri_upper(unsigned int i, char *str);

char	*strmod_clear(const char *str_clear, const char *str_void);
char	*strmod_realloc(const char *src, const char *str_void);
char	*strmod_strstrdup(const char *src, const char *find);
char	*strmod_substr(const char *src, const char *src_end);
#endif
