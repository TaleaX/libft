char *ft_strrchr(const char *s, int c)
{
    int i;
    int pos;

    i = 0;
    pos = -1;
    while (s[i])
    {
        if(s[i] == c)
            pos = i;
        i++;
    }
    if (pos != -1)
        return ((char *)s + pos);
    return ((void *) 0);
}
