#include <stddef.h>

size_t ft_strlcpy(char *dst, const char *src, size_t size)
{
    int i;

    i = 0;
    if (size <= 0) return (0);
    while (size > 1 && *src != '\0')
    {
        dst[i] = *src;
        src++;
        i++;
        size--;
    }
    dst[i] = '\0';
    while (*src != '\0')
    {
        i++;
        src++;
    }
    return (i - 1);
}
