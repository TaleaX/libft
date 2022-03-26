/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:14:45 by tdehne            #+#    #+#             */
/*   Updated: 2022/03/26 16:55:24 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nelem, size_t elsize)
{
	void	*arr;
	char	*d_arr;
	size_t	i;

	i = 0;
	if (nelem <= 0 || elsize <= 0)
		return ((void *) 0);
	arr = malloc(nelem * elsize);
	d_arr = (char *) arr;
	while (i < elsize)
	{
		d_arr[i] = 0;
		i++;
	}
	return (arr);
}
