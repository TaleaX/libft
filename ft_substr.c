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

char *ft_substr(char const *s, unsigned int start, size_t len)
{
    char    *sub;
    int     i;

    sub = (char *) malloc(sizeof(char) * len + 1);
    i = 0;
    if (start < 0 || len < 0 || !s)
        return ((void *) 0);
    while (i < len && s[i + start])
    {
        sub[i] = s[i + start];
        i++;
    }
    sub[i] = '\0';
    return (sub);
}