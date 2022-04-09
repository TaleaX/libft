/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tdehne <tdehne@student.42heilbronn.de>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/04/08 10:03:49 by tdehne            #+#    #+#             */
/*   Updated: 2022/04/09 12:18:07 by tdehne           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*new_lst;

	while (lst)
	{
		if (!lst->content)
			ft_lstdelone(lst, del);
		new_lst = ft_lstnew((*f)(lst->content));
		new_lst = new_lst->next;
		lst = lst->next;
	}
	return (new_lst);
}
