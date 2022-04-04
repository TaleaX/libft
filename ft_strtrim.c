/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:29:07 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/02 18:31:06 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	is_in_set(char const *set, char c)
{
	while (*set)
	{
		if (c == *set)
			return (1);
		set++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	size_t	len;
	size_t	end;
	size_t	start;
	size_t 	i;

	if (!s1 || !set)
		return (NULL);
	start = 0;
	end = 0;
	end = ft_strlen(s1) - 1;
	while (is_in_set(set, s1[start]))
		start++;
	while (is_in_set(set, s1[end]))
		end--;
	len = end - start + 1;
	if (start == ft_strlen(s1))
		len = 0;
	str_trim = (char *) malloc(sizeof(char) * len + 1);
	if (!str_trim)
		return ((void *) 0);
	i = 0;
	while (i < len)
	{
		str_trim[i] = s1[start + i];
		i++;
	}
	str_trim[i] = '\0';
	return (str_trim);
}
