#include <stddef.h>
void *ft_memchr(const void *s, int c, size_t n)
{
    size_t  i;
    unsigned char *d_s;

    d_s = (unsigned char *) s;
    i = 0;
    while (i < n)
    {
        if (d_s[i] == (unsigned char) c)
            return (d_s + i);
        i++;
    }
    return (0);
}
