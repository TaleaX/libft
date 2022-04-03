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
		while (*s == c)
			s++;
		if (*s)
			counter++;
		while (*s && *s != c)
			s++;
	}
	return (counter);
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

static const char	*set_ptr_to_c(const char *s, char c)
{
	while (*s && *s != c)
		s++;
	return (s);
}

static const char	*set_ptr_to_word(const char *s, char c)
{
	while (*s && *s == c)
		s++;
	return (s);
}

char	**ft_split(char const *s, char c)
{
	char	**arr;
	int		len;
	int		sub_len;
	int		i;

	if (!s)
		return (NULL);
	len = get_len(s, c);
	arr = (char **) ft_calloc(len + 1, sizeof(char *));
	if (!arr)
		return NULL;	
	i = 0;
	while (i < len)
	{
		s = set_ptr_to_word(s, c);
		if (!*s)
			break ;
		sub_len = get_sublen(s, c);
		arr[i] = ft_substr(s, 0, sub_len);
		s = set_ptr_to_c(s, c);
		if (!arr[i])
			break ;
		i++;
	}
	return (arr);
}
