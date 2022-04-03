/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:53:50 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/02 17:51:21 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	get_len(const char *s, char c)
{
	int	counter;

	counter = 0;
	while (*s)
	{
		if (*s == c)
		{
			while (*s == c)
				s++;
			counter++;
		}
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

char	**ft_split(char const *s, char c)
{
	char	**arr;
	char	*s_trimmed;
	int		len;
	int		sub_len;
	int		i;

	if (!s || !c)
		return (NULL);
	s_trimmed = ft_strtrim(s, &c);
	len = get_len(s_trimmed, c);
	arr = (char **) ft_calloc(len + 1, sizeof(char *));
	if (!arr)
		return NULL;	
	i = 0;
	while (i < len)
	{
		sub_len = get_sublen(s_trimmed, c);
		arr[i] = ft_substr(s_trimmed, 0, sub_len);
		s_trimmed = ft_strchr(s_trimmed, c);
		while (s_trimmed && *s_trimmed == c)
			s_trimmed++;
		i++;
	}
	free(s_trimmed);
	return (arr);
}
