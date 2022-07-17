/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mstefani <mstefani@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/09/09 14:40:49 by mstefani          #+#    #+#             */
/*   Updated: 2019/11/28 17:02:58 by mstefani         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <string.h>
# include <unistd.h>
# include <stdlib.h>
# include <limits.h>
# include <math.h>
# include <fcntl.h>
# include <stdio.h>
# include <sys/uio.h>
# define BUFF_SIZE 32

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

typedef struct		s_vec
{
	double			x;
	double			y;
	double			z;
}					t_vec;

int					ft_abs(int d);
int					ft_sqrt(int nb);
double				ft_atof(const char *nptr);
int					ft_factorial(int nb);
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *b, int c, size_t len);
void				ft_memdel(void **ap);
void				*ft_memmove(void *dst, const void *src, size_t len);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memalloc(size_t size);
void				ft_putchar(char ch);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr(char const *st);
void				ft_putstr_fd(char const *s, int fd);
void				ft_putnbr(int n);
void				ft_putnbr_fd(int n, int fd);
void				ft_putendl(const char *s);
void				ft_putendl_fd(const char *s, int fd);
void				ft_strdel(char **as);
int					ft_toupper(int c);
int					ft_tolower(int c);
int					ft_ispace(char ch);
int					ft_isalnum(int c);
int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_isupper(int c);
int					ft_islower(int c);
int					ft_atoi(const char *st);
int					ft_atoi_base(const char *s, int rate);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_strclr(char *s);
void				*ft_memcpy(void *dst, const void *src,\
		size_t n);
void				*ft_memccpy(void *dst, const void *src,\
		int c, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
size_t				ft_strlen(const char *st);
char				**ft_strsplit(const char *s, char c);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, \
		const char *needle, size_t len);
char				*ft_strdup(const char *s1);
char				*ft_strnew(size_t size);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
char				*ft_strsub(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_join_and_free(char **s1, char const *s2);
char				*ft_strtrim(char const *s);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_itoa(int n);
void				ft_printf(char* format, ...);
int					ft_overlong(long int d, int sign, char c);
int					ft_leni(long long int n);
t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdelone(t_list **alst, void (*del)(void*, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_vec				ft_vectorscale(t_vec *v, double n);
t_vec				ft_vectorsub(t_vec *v1, t_vec *v2);
t_vec				ft_vectorcross(t_vec *v1, t_vec *v2);
void				ft_vectornorm(t_vec *v);
double				ft_vectordot(t_vec *v1, t_vec *v2);
double				ft_vectorlen(t_vec *v);
t_vec				ft_vectoradd(t_vec *v1, t_vec *v2);
int					ft_rgb_to_int(int red, int green, int blue);
int					get_next_line(const int fd, char **line);

#endif
