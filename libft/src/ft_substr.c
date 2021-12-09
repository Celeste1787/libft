/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:51:06 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/07 12:27:35 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newchar;
	size_t	i;

	newchar = malloc(len * sizeof(char));
	i = 0;
	if (!newchar)
		return (NULL);
	while (len - 1 > 0)
	{
		newchar[i++] = s[start++];
		len--;
	}
	newchar[i] = '\0';
	return (newchar);
}
