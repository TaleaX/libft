/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstiter.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/07 21:11:51 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/07 21:11:51 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void ft_lstiter(t_list *lst, void (*f)(void *))
{
	while (*lst->next)
	{
		(*f)(lst->content);
		*lst = lst->next;
	}
}
