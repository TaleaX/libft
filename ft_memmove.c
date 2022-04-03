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

	d_src = (char *) src;
	d_dest = (char *) dest;
	i = 0;
	if (!src || !dest)
		return (NULL);
	if (len > ft_strlen(d_src))
		len = ft_strlen(d_src);
	if (src > dest)
	{
		while (i < len && d_dest[i])
		{
			d_dest[i] = d_src[i];
			i++;
		}
		d_dest[i] = '\0';
		return (dest);
	}
	d_dest[len] = '\0';
	while (--len)
		d_dest[len] = d_src[len];
	return (dest);
}
