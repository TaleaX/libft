/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:47:18 by tdehne            #+#    #+#             */
/*   Updated: 2022/03/26 17:10:39 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*str_concat;
	int		i;
	int		j;

	if (!s1 || !s2)
		return ((void *) 0);
	str_concat = (char *) malloc((ft_strlen(s1) + ft_strlen(s2)) + 1);
	i = 0;
	while (s1[i])
	{
		str_concat[i] = s1[i];
		i++;
	}
	j = 0;
	while (s2[j])
	{
		str_concat[j + i] = s1[j];
		j++;
	}
	str_concat[j + i] = '\0';
	return (str_concat);
}
