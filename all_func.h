#ifndef ALL_FUNC_H
#define ALL_FUNC_H
#include <stddef.h>
void ft_bzero(void *s, size_t n);
int ft_isprint(int c);
int ft_toupper(int c);
size_t ft_strlcpy(char *dst, const char *src, size_t size);
void *ft_memset(void *s, int c, size_t n);
int	ft_strlen(char *str);
int ft_isascii(int c);
int ft_isdigit(int c);
int ft_isalpha(int c);
int ft_isalnum(int c);
void *ft_memcpy(void *dest, const void *src, size_t n);
void *ft_memmove(void *dest, const void *src, size_t n);
int ft_tolower(int c);
#endif
