#include <stddef.h>

void ft_bzero(void *s, size_t n)
{
    char    *s_c;

    s_c = (char *) s;
    while (n--)
    {
        *s_c++ = '\0';
    }
}
