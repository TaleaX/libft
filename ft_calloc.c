/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/03/26 16:14:45 by tdehne            #+#    #+#             */
/*   Updated: 2022/03/29 16:35:13 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*arr;
	char	*d_arr;
	size_t	i;

	i = 0;
	if (count <= 0 || size <= 0)
		return ((void *) 0);
	arr = malloc(count * size);
	if (!arr)
		return ((void *) 0);
	d_arr = (char *) arr;
	while (i < count)
	{
		d_arr[i] = 0;
		i++;
	}
	return (arr);
}
