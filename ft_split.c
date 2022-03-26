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

static int	get_splits(const char *s, char c)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		if (*s == c)
			counter++;
		s++;
	}
	return (counter);
}

static int	len_substr(const char *s, int c)
{
	int	counter;

	counter = 0;
	while (*s && *s == c)
		s++;
	while (*s && *s != c)
	{
		counter++;
		s++;
	}
	return (counter);
}

char	**ft_split_helper(char const *s, char c, char **arr, int len)
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
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		len;

	len = get_splits(s, c);
	arr = (char **) malloc(sizeof(char *) * len + 1);
	if (!s)
		return ((void *) 0);
	arr = ft_split_helper(s, c, arr, len);
	return (arr);
}
