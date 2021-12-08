/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:08:39 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/07 14:14:20 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_strnlen(const char *s, size_t maxlen)
{
	static int	len;
	static int	maxlen2;

	maxlen2 = maxlen;
	len = 0;
	while (len < maxlen2)
	{
		len++;
		s++;
		if (!*s)
			break ;
	}
	return (len);
}

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	i;
	size_t	j;
	size_t	dstlen;

	i = 0;
	j = 0;
	dstlen = ft_strnlen(dst, size);
	while (i < size && dst[i])
		i++;
	if (i == size)
		return (i + ft_strnlen(src, size));
	while (src[j])
	{
		if (j < size - dstlen - 1)
		{
			dst[i] = src[j];
			i++;
		}
		j++;
	}
	dst[i] = '\0';
	return (dstlen + j);
}
