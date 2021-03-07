/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: trofidal <trofidal@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/02/09 22:21:06 by trofidal          #+#    #+#             */
/*   Updated: 2021/03/08 00:24:00 by trofidal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <stdlib.h>
# include <unistd.h>
# include <string.h>
# include <stdio.h>
# include <stdarg.h> /* FOR PRINTF */
# define BUFF_SIZE 32

typedef	struct		s_list
{
	void			*content;
	struct s_list	*next;
}					t_list;

/*
**VOID FUNCTIONS
*/
void				ft_bzero(void *s, size_t n);
void				*ft_memset(void *s, int c, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);
void				ft_strdel(char **as);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
void				ft_strclr(char *s);
void				*ft_calloc(size_t count, size_t size);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(char *s, int fd);
void				ft_putendl_fd(char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_lstadd_front(t_list **alst, t_list *new);
void				ft_lstadd_back(t_list **alst, t_list *new);
void				ft_lstdelone(t_list *lst, void (*del)(void *));
void				ft_lstclear(t_list **lst, void (*del) (void *));
void				ft_lstiter(t_list *lst, void (*f)(void *));
void				ft_putstr(const char *str);
void				ft_putchar(char c);
void     			ft_putnbr_base(long long int nbr, char *base);
/*
**CHAR FUNCTIONS
*/ 
char				*ft_strnew(size_t size);
char				*ft_strncat(char *dest, const char *src, size_t n);
char				*ft_strcat(char *dest, const char *src);
char				*ft_strncpy(char *dest, const char *src, size_t n);
char				*ft_strdup(const char *s);
char				*ft_strcpy(char *dest, const char *src);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *meule_de_foin, const char *aiguille);
char				*ft_strnstr(const char *str, const char *find, size_t n);
char				*ft_strmap(char const *s, char (*f)(char));
char				*ft_strmapi(char const *s, char (*f) (unsigned int, char));
char				*ft_substr(char const *s, unsigned int start, size_t len);
char				*ft_strjoin(char const *s1, char const *s2);
char				*ft_strtrim(char const *s1, char const *set);
char				*ft_itoa(int n);
char				*ft_strndup(const char *s, size_t n);
char				**ft_split(char const *str, char set);
char				*ft_strclrstr(char *str);
char				*ft_itoa_base(long long int n, char *base);
char				*ft_itoa_unsigned(unsigned int n);
char				*ft_itoa_pointer(long long int n, char *base);
char				*ft_strclrstr(char *str);
char				*ft_strclrnbr(char *str);
char				*ft_putnbr_float(long double nbr); 
char				*ft_stradd_char(char *dest, char a);
char				*ft_long_itoa(long long int n);
/*
**SIZE_T FUNCTIONS
*/
size_t				ft_strlcat(char *dest, const char *src, size_t n);
size_t				ft_strlen(const char *str);
size_t				ft_strlcpy(char *dest, const char *src, size_t n);
/*
**INT FUNCTIONS
*/
int					ft_tolower(int c);
int					ft_toupper(int c);
int					ft_isprint(int c);
int					ft_isascii(int c);
int					ft_isalnum(int c);
int					ft_isdigit(int c);
int					ft_isalpha(int c);
int					ft_atoi(const char *str);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strequ(char const *s1, char const *s2);
int					ft_strnequ(char const *s1, char const *s2, size_t n);
int					ft_lstsize(t_list *lst);
int					ft_charcmp(char s1, char s2);
int					ft_charcmp(char s1, char s2);
int					ft_find_char(char c,char *str);
int					ft_recursive_power(int nb, int power);
long long int		ft_long_atoi(const char *str);
/*
**T_LIST
*/
t_list				*ft_lstnew(void *content);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstlast(t_list *lst);
t_list				*ft_lstmap(t_list *lst, void *(*f)(void *), \
void (*del)(void *));
/*
**LONG DOUBLE
*/
long double			ft_atof(const char *str);

#endif
