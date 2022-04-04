/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 15:12:25 by tdehne            #+#    #+#             */
/*   Updated: 2022/03/29 17:44:31 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strrchr(const char *s, int c)
{
	int	i;
	int	pos;

	i = 0;
	pos = -1;
	while (s[i])
	{
		if (s[i] == (char) c)
			pos = i;
		i++;
	}
	if (pos != -1)
		return ((char *)s + pos);
	if ((char) c == '\0')
		return ((char *)s + i);
	return (NULL);
}
