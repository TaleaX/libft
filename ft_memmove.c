/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:41:55 by tdehne            #+#    #+#             */
/*   Updated: 2022/03/26 18:05:17 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	i;
	char	*d_src;
	char	*d_dest;

	d_src = (char *) src;
	d_dest = (char *) dest;
	i = 0;
	if (src > dest)
	{
		while (i < n)
		{
			d_dest[i] = d_src[i];
			i++;
		}
		return (dest);
	}
	n--;
	while (n >= 0)
	{
		d_dest[n] = d_src[i];
		i++;
		n--;
	}
	return (dest);
}
