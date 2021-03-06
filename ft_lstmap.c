/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:50:01 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/22 18:48:00 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;
	t_list	*node;

	newlst = 0;
	if (!lst || !f)
		return (NULL);
	if (lst)
	{
		while (lst)
		{	
			node = ft_lstnew(f(lst->content));
			if (!node)
			{
				ft_lstclear(&node, del);
				return (NULL);
			}
			ft_lstadd_back(&newlst, node);
			lst = lst->next;
		}
	}
	return (newlst);
}
