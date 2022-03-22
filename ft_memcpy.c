#include <stddef.h>
#include <stdlib.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
    char    *dest_c;
    char    *src_c;

    dest_c = (char *) dest;
    src_c = (char *) src;
    if (n <= 0) return (dest);
    while (n--)
    {
        *dest_c++ = *src_c++;
    }
    return (dest);
}