/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 13:51:49 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/05 14:49:03 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	i;

	if (ft_strlen(s) < len)
		len = ft_strlen(s);
	sub = (char *) malloc(sizeof(char) * len + 1);
	if (!s || !sub)
		return (NULL);
	if (ft_strlen(s) < start)
		return (ft_memset(sub, '\0', len + 1));
	i = 0;
	while (i < len && s[i + start])
	{
		sub[i] = s[i + start];
		i++;
	}
	sub[i] = '\0';
	return (sub);
}
