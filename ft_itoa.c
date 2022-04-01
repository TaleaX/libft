/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:08:25 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/01 15:41:10 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	get_strnum_len(long n)
{
	int	counter;

	counter = 0;
	if (!n)
		return (1);
	if (n < 0)
		n *= -1;
	while (n > 0)
	{
		counter++;
		n /= 10;
	}
	return (counter);
}

static long	ft_abs(long n)
{
	if (n < 0)
		return (n * -1);
	return (n);
}

char	*ft_itoa(int n)
{
	char		*str;
	int			i;
	int			len;
	int			minus;
	long		num;

	minus = 0;
	if (n < 0)
		minus = 1;
	num = ft_abs((long) n);
	len = get_strnum_len(num);
	if (minus)
		len++;
	str = (char *) malloc(sizeof(char) * len + 1);
	i = len - 1;
	str[len] = '\0';
	while (i >= 0)
	{
		str[i] = (num % 10) + '0';
		num = num / 10;
		if (minus && i == 0)
			str[i] = '-';
		i--;
	}
	return (str);
}
