/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:54:01 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/20 15:14:21 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charsetcheck(char const kar, char const *set)
{
	size_t	index;

	index = 0;
	while (set[index])
	{
		if (kar == set[index])
			return (1);
		index++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{	
	int		start;
	int		end;
	int		size;
	int		i;
	char	*trimmed;

	if (!set || !s1)
		return (NULL);
	start = 0;
	end = ft_strlen(s1);
	while (ft_charsetcheck(s1[start], set))
		start++;
	while (end > start && ft_charsetcheck(s1[end - 1], set))
		end--;
	size = end - start;
	i = 0;
	trimmed = malloc(sizeof(char) * size + 1);
	if (!trimmed)
		return (NULL);
	while (start < end)
	{
		trimmed[i++] = s1[start++];
	}
	trimmed[i] = '\0';
	return (trimmed);
}
