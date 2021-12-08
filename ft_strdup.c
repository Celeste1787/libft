/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 18:11:17 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/07 15:20:52 by adovleto         ###   ########.fr       */
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
	if (!dup)
		return (NULL);
	j = 0;
	while (*str)
	{
		*dup++ = *str++;
		j++;
	}
	*dup = '\0';
	return (dup - j);
}
