/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:08:25 by tdehne            #+#    #+#             */
/*   Updated: 2022/03/26 17:01:15 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_strnum_len(int n)
{
	int	counter;

	counter = 0;
	while (n / 10)
	{
		counter++;
	}
	return (counter + 1);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		remainder;
	int		i;
	int		len;

	len = get_strnum_len(n);
	str = (char *) malloc(sizeof(char) * len + 1);
	i = len - 1;
	str[len] = '\0';
	while (n && i >= 0)
	{
		remainder = n % 10;
		n = (n - remainder) / 10;
		str[i] = remainder + '0';
		i--;
	}
	return (str);
}
