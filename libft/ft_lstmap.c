/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aleveque <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/30 14:17:23 by aleveque          #+#    #+#             */
/*   Updated: 2016/12/02 13:08:23 by aleveque         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *new;
	t_list *next;
	t_list *start;

	if (lst == NULL)
		return (NULL);
	next = NULL;
	if (!(new = ft_lstnew(NULL, 0)))
		return (NULL);
	new = f(lst);
	lst = lst->next;
	new->next = next;
	next = new;
	start = new;
	while (lst != NULL)
	{
		if (!(new = ft_lstnew(NULL, 0)))
			return (NULL);
		new = f(lst);
		lst = lst->next;
		new->next = next;
		next = new;
	}
	return (start);
}
