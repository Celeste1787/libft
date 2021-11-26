/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:11:17 by adovleto          #+#    #+#             */
/*   Updated: 2021/11/26 18:56:27 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	char	*str;
	char	*dup;
	size_t	j;

	str = (char *) s;
	dup = malloc(sizeof(char) * ft_strlen(str) + 1);
	j = 0;
	while (*str)
	{
		*dup++ = *str++;
		j++;
	}
	*dup = '\0';
	return (dup - j);
}
