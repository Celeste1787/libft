/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:48:38 by adovleto          #+#    #+#             */
/*   Updated: 2021/11/25 20:05:19 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*tempstr;
	size_t			i;

	tempstr = (unsigned char *) s;
	i = 0;
	while (n)
	{
		tempstr[i] = '\0';
		n--;
		i++;
	}
}
