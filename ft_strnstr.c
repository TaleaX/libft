/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:20:59 by tdehne            #+#    #+#             */
/*   Updated: 2022/03/29 18:11:33 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *haystack, const char *needle, size_t len)
{
	size_t	i;
	size_t	j;
	size_t	counter;
	size_t	len_needle;

	len_needle = ft_strlen(needle);
	counter = 0;
	if (!len_needle)
		return ((char *) haystack);
	i = 0;
	while (haystack[i] && i < len)
	{
		j = 0;
		while (needle[j])
		{
			if (!haystack[j + i])
				break ;
			if (needle[j] == haystack[j + i])
				counter++;
			j++;
		}
		if (counter == len_needle)
			return ((char *)(haystack + i));
		i++;
	}
	return ((void *) 0);
}
