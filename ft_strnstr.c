/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:20:59 by tdehne            #+#    #+#             */
/*   Updated: 2022/03/26 17:22:05 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	size_t	i;
	size_t	j;
	char	*ret;

	ret = (char *) s1;
	if (*s2 == '\0')
		return (ret);
	i = 0;
	while (s1[i] && i < n)
	{
		j = 0;
		while (s2[j] == s1[i + j])
			j++;
		if (j == n)
			return (ret + i);
		i++;
	}
	return ((void *) 0);
}
