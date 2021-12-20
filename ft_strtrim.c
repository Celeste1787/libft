/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celeste <celeste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:54:01 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/15 12:19:01 by celeste          ###   ########.fr       */
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

static int	ft_findstart(char const *s1, char const *set)
{
	int	i;

	i = 0;
	while (s1[i])
	{
		while (s1[i] && ft_charsetcheck(s1[i], set))
			i++;
		break;
	}
	return (i);
}

static int 	ft_findend(char const *s1, char const *set, int i)
{
	int	j;

	j = ft_strlen(s1);
	if (i == j)
		return (0);
	while (j > i)
	{
		while (j > 0 && ft_charsetcheck(s1[j], set))
			j--;
		break;
	}
	return (j - i);
}

char	*ft_strtrim(char const *s1, char const *set)
{	int		start;
	int		end;
	int		size;
	int		i;
	char	*trimmed;

	start = ft_findstart(s1, set);
	end = ft_findend(s1, set, start);
	size = ft_strlen(s1) - (start + end);
	i = 0;
	if (!set || !s1)
		return (NULL);
	trimmed = malloc(sizeof(char) * size + 1);
	if (!trimmed)
		return (NULL);
	while (size--)
	{
		trimmed[i] = s1[start + i];
	}
	return (trimmed);
}