/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: slogos <marvin@42.fr>                      +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 13:56:55 by slogos            #+#    #+#             */
/*   Updated: 2016/10/06 22:08:01 by slogos           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list	*new;
	t_list	*i;

	if (lst && f)
	{
		new = f(lst);
		i = new;
		while (lst->next)
		{
			i->next = f(lst->next);
			i = i->next;
			lst = lst->next;
		}
		return (new);
	}
	return (0);
}
