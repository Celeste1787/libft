/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstadd_back.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 15:43:22 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/08 17:32:24 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_lstadd_back(t_list **alst, t_list *new)
{
	t_list	*nnew;

	if (!*(alst))
		*alst = new;
	else
	{
		nnew = ft_lstlast(*(alst));
		nnew->next = new;
	}
}
