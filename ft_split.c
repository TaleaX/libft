static int get_splits(const char *s, char c)
{
    int counter;

    counter = 0;
    while (*s)
    {
        if (*s == c)
            counter++;
        s++;
    }
    return (counter);
}

static int len_substr(const char *s, int c)
{
    int counter;

    counter = 0;
    while (*s && *s == c)
        s++;
    while (*s && *s != c)
    {
        counter++;
        s++;
    }
    return(counter);
}

char **ft_split(char const *s, char c)
{
    char    **arr;
    char    *ptr;
    int     len;
    int     len_sub;
    int     i;
    int     j;

    len = get_splits(s, c);
    arr = (char **) malloc(sizeof(char *) * len + 1);
    i = 0;
    if (!s)
        return ((void *) 0);
    while (i < len)
    {
        len_sub = len_substr(s, c);
        arr[i] = (char *) malloc(sizeof(char) * len_sub + 1);
        j = 0;
        while (*s && *s != c)
        {
            arr[i][j] = *s;
            s++;
            j++;
        }
        arr[i][j] = '\0';
        i++;
        s++;
    }
    arr[i] = (void *) 0;
    return (arr);
}