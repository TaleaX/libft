/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:18:46 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/04 16:42:33 by tdehne           ###   ########.fr       */
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

void	atoi_helper(const char **nptr, int	*minus, long *result, int *w_s_h_s)
{
	int		log_10;

	while (**nptr)
	{
		while (w_s_h_s[0] && (**nptr == '\v' || **nptr == '\t'
				|| **nptr == '\r' || **nptr == '\n'
				|| **nptr == '\f' || **nptr == ' '))
			(*nptr)++;
		w_s_h_s[0] = 0;
		if (**nptr < '0' || **nptr > '9')
		{
			if (!w_s_h_s[1] && (**nptr == '+' || **nptr == '-'))
			{
				if (**nptr == '-')
					*minus = 1;
				w_s_h_s[1] = 1;
				(*nptr)++;
				continue ;
			}
			break ;
		}
		log_10 = get_log_10(*nptr);
		*result += ((**nptr) - '0') * pow_of_a(10, log_10);
		(*nptr)++;
	}
}

int	ft_atoi(const char *nptr)
{
	long	result;
	int		minus;
	int		white_s_hit_s[2];

	result = 0;
	minus = 0;
	white_s_hit_s[0] = 1;
	white_s_hit_s[1] = 0;
	atoi_helper(&nptr, &minus, &result, white_s_hit_s);
	if (minus)
		result = result * (-1);
	return (result);
}
