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

char *ft_strdup(const char *s)
{
    char    *arr;
    int     i;

    arr = (char *) malloc(sizeof(char) * str_length(s) + 1);
    while (s[i])
    {
        arr[i] = s[i];
        i++;
    }
    arr[i] = '\0';
    return (arr);
}