/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:53:50 by tdehne            #+#    #+#             */
/*   Updated: 2022/03/26 17:12:10 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	get_len(const char *s, char c)
{
	int	counter;
	int	hit_delim;

	hit_delim = 0;
	counter = 0;
	while (*s)
	{
		while (*s == c && !hit_delim)
		{
			hit_delim = 1;
			counter++;
		}
		hit_delim = 0;
		s++;
	}
	return (counter + 1);
}

static int	get_sublen(const char *s, char c)
{
	int	counter;

	counter = 0;
	while (*s && *s != c)
	{
		counter++;
		s++;
	}
	return (counter);
}

/*char	**ft_split_helper(char const *s, char c, char **arr, int len)
{
	int		i;
	int		j;
	int		len_sub;

	i = 0;
	while (i < len)
	{
		len_sub = len_substr(s, c);
		arr[i] = (char *) malloc(sizeof(char) * len_sub + 1);
		j = 0;
		while (*s && *s != c)
		{
			arr[i][j] = *s;
			s++;
		j++;
		}
		arr[i][j] = '\0';
		i++;
		s++;
	}
	arr[i] = (void *) 0;
	return (arr);
}*/

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*s_trimmed;
	int		len;
	int		sub_len;
	int 	i;
	char	*ch;

	ch = (char *) malloc(2);
	ch[0] = ';';
	ch[1] = '\0';
	s_trimmed = ft_strtrim(s_trimmed, ch);
	//printf("%s\n", s_trimmed);
	len = get_len(s_trimmed, c);
	arr = (char **) malloc(sizeof(char *) * len + 1);
	if (!s)
		return ((void *) 0);
	i = 0;
	while (i < len)
	{
		sub_len = get_sublen(s_trimmed, c);
		arr[i] = ft_substr(s_trimmed, 0, sub_len);
		//printf("lol\n%s\nlol\n%d %d\n", arr[i], i, sub_len);
		s_trimmed = ft_strchr(s_trimmed, c);
		while (*s_trimmed == c)
			s_trimmed++;
		i++;
	}
	arr[i] = 0;
	return (arr);
}

int main(int argc, char **argv)
{
	char **arr;

	if (argc)
	{
		printf("%s\n", *argv);
		arr = ft_split(*(argv+1), ';');
	}
	return 0;
}