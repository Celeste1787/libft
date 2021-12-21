/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/25 18:30:58 by adovleto          #+#    #+#             */
/*   Updated: 2021/11/25 20:25:33 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char	*tmpdest;
	unsigned char	*tmpsrc;

	tmpdest = (unsigned char *) dest;
	tmpsrc = (unsigned char *) src;
	if (n == 0)
		return (dest);
	if (dest > src)
	{
		while (n--)
			tmpdest[n] = tmpsrc[n];
	}
	else
	{
		while (n--)
			*tmpdest++ = *tmpsrc++;
	}
	return (dest);
}
