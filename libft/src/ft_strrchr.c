/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 15:39:24 by adovleto          #+#    #+#             */
/*   Updated: 2021/11/26 18:48:42 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *) s;
	i = ft_strlen(s);
	while (i--)
	{
		if (str[i] == c)
			return (str + i);
	}
	return (NULL);
}
