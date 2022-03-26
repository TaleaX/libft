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

char *ft_strjoin(char const *s1, char const *s2)
{
    char    *str_concat;
    int     i;
    int     j;

    if (!s1 || !s2)
        return ((void *) 0);
    str_concat = (char *) malloc(sizeof(char) * (str_length(s1) + str_length(s2)) + 1);
    i = 0;
    while (s1[i])
    {
        str_concat[i] = s1[i];
        i++;
    }
    j = 0;
    while (s2[j])
    {
        str_concat[j + i] = s1[j];
        j++;
    }
    str_concat[j + i] = '\0';
    return (str_concat);
}