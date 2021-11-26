/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 17:58:24 by adovleto          #+#    #+#             */
/*   Updated: 2021/11/25 20:06:04 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t			i;
	unsigned char	*tmpdest;
	unsigned char	*tmpsrc;

	i = 0;
	tmpdest = (unsigned char *) dest;
	tmpsrc = (unsigned char *) src;
	while (n)
	{
		tmpdest[i] = tmpsrc[i];
		i++;
		n--;
	}
	return (dest);
}
