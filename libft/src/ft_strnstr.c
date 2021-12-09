/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/26 16:06:10 by adovleto          #+#    #+#             */
/*   Updated: 2021/11/26 18:58:43 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;
	char	*hay;
	char	*needle;

	hay = (char *) big;
	needle = (char *) little;
	i = 0;
	if (!needle)
		return (hay);
	while (hay[i] && len--)
	{
		j = 0;
		while (needle[j] == hay[i + j])
		{
			j++;
			if (needle[j] == '\0')
				return (hay + i);
		}
		i++;
	}
	return (NULL);
}
