/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   aabouqas42.h                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/10/31 10:37:38 by aabouqas          #+#    #+#             */
/*   Updated: 2024/05/26 09:38:28 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef AABOUQAS42_H
# define AABOUQAS42_H

# include <stdlib.h>
# include <unistd.h>
# include <stdarg.h>
# include <limits.h>

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 5
# endif

typedef struct s_list
{
	void			*content;
	struct s_list	*next;
}	t_list;

# define HEXA_UP "0123456789ABCDEF"
# define HEXA_LW "0123456789abcdef"

int		get_base_length(int num, int base);
int		ft_isascii(int c);
int		ft_isalnum(int c);
int		ft_isdigit(int c);
int		ft_isalpha(int c);
int		ft_iswhite(int c);
int		ft_toupper(int c);
int		ft_tolower(int c);
size_t	ft_strlen(const char *s);
int		ft_isprint(int c);
void	*ft_memset(void *b, int c, size_t len);
int		ft_strncmp(const char *s1, const char *s2, size_t n);
void	*ft_memchr(const void *s, int c, size_t n);
int		ft_memcmp(const void *s1, const void *s2, size_t n);
char	*ft_strnstr(const char *haystack, const char *needle, size_t len);
int		ft_atoi(const char *str);
void	ft_bzero(void *s, size_t n);
char	*ft_strrchr(const char *s, int c);
void	*ft_memcpy(void *dest, const void *src, size_t n);
void	*ft_memmove(void *dest, const void *src, size_t len);
size_t	ft_strlcpy(char *dest, const char *src, size_t dstsize);
void	*ft_calloc(size_t count, size_t size);
char	*ft_strdup(const char *s1);
char	*ft_substr(char const *s, unsigned int start, size_t len);
size_t	ft_strlcat(char *dest, const char *src, size_t dstsize);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_strtrim(char const *s1, char const *set);
char	**ft_split(char const *s, char c);
char	*ft_strchr(const char *s, int c);
char	*ft_itoa(int n);
char	*ft_strmapi(char const *s, char (*f)(unsigned int, char));
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
int		ft_putchar_fd(char c, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_putendl_fd(char *s, int fd);
void	ft_putnbr_fd(int n, int fd);

t_list	*ft_lstnew(void *content);
void	ft_lstadd_front(t_list **head, t_list *newhead);
int		ft_lstsize(t_list *lst);
t_list	*ft_lstlast(t_list *lst);
void	ft_lstadd_back(t_list **lst, t_list *_new);
void	ft_lstdelone(t_list *lst, void (*del)(void *));
void	ft_lstclear(t_list **lst, void (*del)(void *));
void	ft_lstiter(t_list *lst, void (*f)(void *));
t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *));

/*
printf by aabouqas :
	printf anything to the given fd
	formats : %s %d %i %x %X %p %c %u
*/

int		print(int fd, const char *str, ...);
int		ft_putstr(int fd, char *str);
int		ft_putchar(int c);
int		ft_print_number(int fd, int num);
int		ft_putbase(int fd, unsigned int num, char *base);
int		ft_pointer(int fd, unsigned long p);
int		ft_unsigned(int fd, unsigned int num);

/*
get next line by aabouqas :
	get a line from a file via fd aka file descriptor
*/

char	*get_next_line(int fd);
size_t	ft_strlen_bonus(char *str);
char	*app_end_bonus(char *str1, char *str2);
int		found_newline_bonus(char *str);
char	*get_remaining_letters_bonus(char *str);
char	*get_the_line_bonus(char *s, char **rem_ltrs);

#endif
