void ft_striteri(char *s, void (*f)(unsigned int, char*))
{
    while (*s)
    {
        f(i, s);
        s++;
    }
}