char    *ft_strnstr(const char *s1, const char *s2, size_t n)
{
    size_t  i;
    size_t  j;

    if (*s2 == '\0')
        return (s1);
    i = 0;
    while (s1[i]  && i < n)
    {
        j = 0
        while (s2[j] == s1[i + j])
            j++;
        if (j == n)
            return (s1[i])
        i++;
    }
    return ((void *) 0);
}