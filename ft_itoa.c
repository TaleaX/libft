/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:08:25 by tdehne            #+#    #+#             */
/*   Updated: 2022/03/28 18:06:44 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>

static int	get_strnum_len(int n)
{
	int	counter;

	counter = 0;
	while (n > 0)
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		remainder;
	int		i;
	int		len;
	int		minus;

	if (n < 0)
		minus = 1;
	len = get_strnum_len(n);
	str = (char *) malloc(sizeof(char) * len + 1);
	i = len - 1;
	str[len] = '\0';
	while (i >= 0)
	{
		remainder = n % 10;
		n = (n - remainder) / 10;
		str[i] = remainder + '0';
		if (n < 0 && i == 0)
			str[i] = '-';
		i--;
	}
	return (str);
}
