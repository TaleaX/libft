#include <stddef.h>

static  int ft_str(char *str)
{
    int counter;

    counter = 0;
    while (str[counter])
        counter++;
    return (counter);
} 

size_t  strlcat(char *dest, const char *src, size_t size)
{
    size_t  i;
    int     len_dest;

    i = 0;
    len_dest = ft_str(dest);
    while (*dest)
        dest++;
    while (i < size - len_dest && *src)
    {
        *dest = *src;
        src++;
        dest++;
        i++;
    }
    while (*src)
        i++;
    return (i); //or i + 1 does the null terminating charachter count?
}