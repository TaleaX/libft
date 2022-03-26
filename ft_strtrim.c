/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:29:07 by tdehne            #+#    #+#             */
/*   Updated: 2022/03/26 16:58:05 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char const *str, char c)
{
	while (*str)
	{
		if (c == *str)
			return (1);
		str++;
	}
	return (0);
}

static char	*trim(char const *s1, char const *set, int len, char *str_trim)
{
	int		i;
	int		j;
	int		start;
	int		end;

	i = 0;
	j = 0;
	end = 1;
	start = 1;
	while (i < len - j)
	{
		while (start && is_in_set(set, s1[i]))
			i++;
		start = 0;
		str_trim[j] = s1[i];
		while (end && is_in_set(set, s1[len - j - 1]))
			j++;
		end = 0;
		i++;
	}
	return (str_trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	int		len;

	len = ft_strlen(s1);
	if (!s1 || !set)
		return ((void *) 0);
	str_trim = (char *) malloc(sizeof(char) * len + 1);
	str_trim = trim(s1, set, len, str_trim);
	return (str_trim);
}
