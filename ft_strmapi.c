static int	str_len(char *str)
{
	int		counter;

	counter = 0;
	while (str[counter] != '\0')
		counter++;
	return (counter);
}

char *ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
    int i;
    char    *str;

    if (!s)
        return ((void *) 0);
    str = (char *) malloc(sizeof(char) * str_len(s) + 1);
    i = 0;
    while (s[i])
    {
        str[i] = f(i, s[i]);
        i++;
    }
    str[i] = '\0';
    return (str);
}