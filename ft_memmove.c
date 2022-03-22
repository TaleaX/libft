#include <stddef.h>
#include <stdio.h>
void *ft_memmove(void *dest, const void *src, size_t n)
{
    size_t  i;
    char    tmp[n];
    char    *d_src;
    char    *d_dest;
    d_src = (char *) src;
    d_dest = (char *) dest;
    i = 0;
    while (i < n)
    {
        tmp[i] = d_src[i];
        d_dest[i] = tmp[i];
        i++;
    }
    return (dest);
}