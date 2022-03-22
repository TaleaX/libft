int ft_isprint(int c)
{
    return (c >= 32 && c <= 255 && c != 127);
}