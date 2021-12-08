/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 18:50:01 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/08 19:23:44 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

t_list	*ft_lstmap(t_list *lst, void *(*f)(void *), void (*del)(void *))
{
	t_list	*newlst;

	while (lst)
	{	
		newlst = malloc(sizeof(t_list));
		if (!newlst)
		{
			del(newlst);
			free(newlst);
			return (NULL);
		}
		newlst = f(lst->content);
		lst = lst->next;
	}
	return (newlst);
}
