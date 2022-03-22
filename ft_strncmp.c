int	ft_strncmp(char *s1, char *s2, unsigned int n)
{
	unsigned int	i;
	unsigned char 	*d_s1;
	unsigned char 	*d_s2;

	d_s1 = (unsigned char *) s1;
	d_s2 = (unsigned char *) s2;
	i = 0;
	while (i < n)
	{
		if (s1[i] != s2[i])
			return (d_s1[i] - d_s2[i]);
		i++;
	}
	return (0);
}