/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:18:46 by tdehne            #+#    #+#             */
/*   Updated: 2022/03/26 16:27:46 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

static int	pow_of_a(int base, int exp)
{
	int		result;

	result = 1;
	while (exp > 0)
	{
		result *= base;
		exp -= 1;
	}
	return (result);
}

static int	get_log_10(const char *nptr)
{
	int	counter;

	counter = 0;
	while (*nptr)
	{
		if (*nptr < '0' || *nptr > '9')
			break ;
		nptr++;
		counter++;
	}
	return (counter - 1);
}

int	ft_atoi(const char *nptr)
{
	int	result;
	int	white_space;
	int	hit_sign;
	int	hit_num;
	int	minus;
	int	log_10;

	result = 0;
	white_space = 1;
	hit_sign = 0;
	hit_num = 0;
	minus = 0;
	while (*nptr)
	{
		while (white_space && (*nptr == '\v' || *nptr == '\t' || *nptr == '\r'
				|| *nptr == '\n' || *nptr == '\f' || *nptr == ' '))
			nptr++;
		white_space = 0;
		if (*nptr < '0' || *nptr > '9')
		{
			if (!hit_sign && (*nptr == '+' || *nptr == '-'))
			{
				if (*nptr == '-')
					minus = 1;
				hit_sign = 1;
				nptr++;
				continue ;
			}
			break ;
		}
		log_10 = get_log_10(nptr);
		result += ((*nptr) - '0') * pow_of_a(10, log_10);
		nptr++;
	}
	if (minus)
		result = result * (-1);
	return (result);
}
