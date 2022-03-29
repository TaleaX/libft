/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:24:35 by tdehne            #+#    #+#             */
/*   Updated: 2022/03/29 19:05:37 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

size_t	ft_strlcat(char *dest, const char *src, size_t size)
{
	size_t	j;
	size_t	len_dest;

	j = 0;
	if (size == 0 || !dest)
		return (ft_strlen(src));
	len_dest = ft_strlen((const char *) dest);
	if (len_dest > size)
		len_dest = size;
	while ((len_dest + j) < (size - 1) && src[j])
	{
		dest[len_dest + j] = src[j];
		j++;
	}
	if (len_dest != size)
		dest[len_dest + j] = '\0';
	return (len_dest + ft_strlen(src));
}
