#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>


void ft_bzero(void *p, size_t c);
int		ft_isprint(int c);
size_t	ft_strlen(const char *s);
int		ft_tolower(int c);
int		ft_toupper(int c);
int		ft_isalpha(int c);
int		ft_isdigit(int c);
int		ft_isalnum(int c);
int		ft_isascii(int c);
char	*ft_strrchr(const char *s, int c);
void    *ft_memchr(const void *s, int c, size_t n);
void *ft_memcpy(void *dst, const void *src, size_t n);
void *ft_memmove(void *dst, const void *src, size_t len);
void *ft_memset(void *p, int v, size_t c);
char *ft_strchr(const char *s, int c);
int ft_memcmp(const void *s1, const void *s2, size_t n);


#endif