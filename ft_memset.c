#include <stddef.h>
void *ft_memset(void *s, int c, size_t n)
{
    char *ret;

    ret = (char *) s;
    while (n)
    {
        *ret = c;
        ret++;
        n--;
    }
    return (s);
}
