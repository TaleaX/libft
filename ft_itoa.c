static int  get_strnum_len(int n)
{
    int counter;

    counter = 0;
    while (n / 10)
    {
        counter++;
    }
    return (counter + 1);
}

char *ft_itoa(int n)
{
    char    *str;
    int     remainder;
    int     i;

    str = (char *) malloc(sizeof(char) * get_strnum_len(n) + 1);
    i = len - 1;
    str[len] = '\0';
    while (n && i >= 0)
    {
        remainder = n % 10;
        n = (n - remainder) / 10;
        str[i] = remainder + '0';
        i--;
    }
    return (str);
}
