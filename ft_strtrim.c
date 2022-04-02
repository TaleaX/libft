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

/*static char	*trim(char const *s1, char const *set, int len, char *str_trim)
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
}*/

/*char	*ft_strtrim(char const *s1, char const *set)
{
	char	*str_trim;
	int		len;

	if (!s1)
		return (NULL);
	len = ft_strlen(s1);
	str_trim = (char *) malloc(sizeof(char) * len + 1);
	if (!set || !str_trim)
		return ((void *) 0);
	str_trim = trim(s1, set, len, str_trim);
	return (str_trim);
}*/

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
	if (len < 0)
		len *= -1;
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