/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celeste <celeste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:50:01 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/20 20:36:40 by celeste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;

	newlst = ft_lstnew(f(lst->content));
	if (!newlst)
	{
		ft_lstclear(&newlst, del);
		return (NULL);
	}
	if (lst)
	{
		while (lst)
		{	
			newlst = ft_lstnew(f(lst->content));
			if(!newlst)
			{
				ft_lstclear(&newlst, del);
				return (NULL);
			}
			lst = lst->next;
		}
	}
	return (newlst);
}
