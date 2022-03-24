void *ft_calloc(size_t nelem, size_t elsize)
{
    void    *arr;
    char    *d_arr;

    if (nelem <= 0 || elsize <= 0)
        return ((void * ) 0);
    arr = malloc(nelem * elsize);
    d_arr = (char *) arr;
    while (d_arr[i])
    {
        d_arr[i] = 0;
    }
    return (arr);
}