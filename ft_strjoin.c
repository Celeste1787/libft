/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:27:21 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/07 12:53:30 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t	index;
	size_t	index2;
	char	*fusion;

	index = 0;
	index2 = 0;
	if (!s1 || !s2)
		return (NULL);
	fusion = malloc(sizeof(char) * (ft_strlen(s1) + ft_strlen(s2)) + 1);
	if (!fusion)
		return (NULL);
	while (s1[index])
	{
		fusion[index] = s1[index];
		index++;
	}
	while (s2[index2])
	{
		fusion[index++] = s2[index2++];
	}
	fusion[index] = '\0';
	return (fusion);
}
