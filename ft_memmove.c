/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 14:41:55 by tdehne            #+#    #+#             */
/*   Updated: 2022/03/29 17:23:12 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;
	char	*d_src;
	char	*d_dest;
	size_t	last_s;

	d_src = (char *) src;
	d_dest = (char *) dest;
	i = 0;
	if (!src || !dest)
		return (0);
	last_s = len - 1;
	if (src > dest)
	{
		while (i < len && d_dest[i])
		{
			d_dest[i] = d_src[i];
			i++;
		}
		return (dest);
	}
	while (last_s)
	{
		d_dest[last_s] = d_src[last_s];
		last_s--;
	}
	return (dest);
}
