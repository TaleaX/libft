/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:12:25 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/06 17:03:47 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	long long	len;

	len = ft_strlen(s);
	while (len >= 0)
	{
		if (s[len] == (unsigned char) c)
			return ((char *)(s + len));
		len--;
	}
	return (NULL);
}
