/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:23:18 by tdehne            #+#    #+#             */
/*   Updated: 2022/03/26 17:09:27 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	int		i;
	char	*str;

	if (!s)
		return ((void *) 0);
	str = (char *) malloc(sizeof(char) * ft_strlen(s) + 1);
	i = 0;
	while (s[i])
	{
		str[i] = f(i, s[i]);
	i++;
	}
	str[i] = '\0';
	return (str);
}