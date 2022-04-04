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
	char	*d_src;
	char	*d_dest;

	d_src = (char *) src;
	d_dest = (char *) dest;
	if (!src || !dest)
		return (NULL);
	if (len > ft_strlen(d_src))
		len = ft_strlen(d_src);
	if (src < dest)
	{
		while (--len)
			d_dest[len] = d_src[len];
		d_dest[len] = d_src[len];
		return (dest);
	}
	dest = ft_memcpy(dest, src, len);
	return (dest);
}
