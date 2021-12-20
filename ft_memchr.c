/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:50:11 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/20 13:49:39 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*str;
	int		i;

	str = (char *) s;
	i = 0;
	while (n--)
	{
		if (str[i] == (char) c)
			return (str + i);
		i++;
	}
	return (0);
}
