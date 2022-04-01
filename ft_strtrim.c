/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:29:07 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/01 16:21:32 by tdehne           ###   ########.fr       */
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
	int		start_end;
	int		k;

	i = 0;
	j = 0;
	start_end = 1;
	k = 0;
	while (i < len - j)
	{
		while (start_end && is_in_set(set, s1[i]))
			i++;
		if (!s1[i])
			break ;
		str_trim[k] = s1[i];
		while (start_end && is_in_set(set, s1[len - j - 1]))
			j++;
		start_end = 0;
		i++;
		k++;
	}
	str_trim[k] = '\0';
	return (str_trim);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	int		len;

	len = ft_strlen(s1);
	str_trim = (char *) malloc(sizeof(char) * len + 1);
	if (!set || !str_trim)
		return ((void *) 0);
	str_trim = trim(s1, set, len, str_trim);
	return (str_trim);
}
