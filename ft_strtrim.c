static int	str_length(const char *src)
{
	int	counter;

	counter = 0;
	while (*src)
	{
		counter++;
		src++;
	}
	return (counter);
}

static int  is_in_set(char const *str, char c)
{
    while (*str)
    {
        if (c == *str)
            return (1);
        str++;
    }
    return (0);
}

char *ft_strtrim(char const *s1, char const *set)
{
    char    *str_trim;
    int     i;
    int     j;
    int     start;
    int     len;

    i = 0;
    j = 0;
    len = str_length(s1);
    if (!s1 || !set)
        return ((void *) 0);
    str_trim = (char *) malloc(sizeof(char) * len + 1);
    start = 1;
    while (i < len - j)
    {
        while (start && is_in_set(set, s1[i]))
            i++;
        start = 0;
        str_trim[j] = s1[i];
        while (end && is_in_set(set, s1[len - j - 1]))
            j++;
        end = 0;
        i++;
    }
    return (str_trim);
}