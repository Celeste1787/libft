/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 12:54:01 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/07 16:19:44 by adovleto         ###   ########.fr       */
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

static int	ft_charcount(char const *s1, char const *set)
{
	static int	charcount;
	size_t		s1_len;

	charcount = 0;
	s1_len = ft_strlen(s1);
	if (ft_charsetcheck(s1[0], set))
		charcount++;
	if (ft_charsetcheck(s1[s1_len - 1], set))
		charcount++;
	return (s1_len - charcount);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	size_t	s1_final;
	size_t	index;
	size_t	index2;
	char	*trimmed;

	if (!set || !s1)
		return (NULL);
	s1_final = ft_charcount(s1, set);
	index = 0;
	index2 = 0;
	trimmed = malloc(sizeof(char) * s1_final + 1);
	if (!trimmed)
		return (NULL);
	if (ft_charsetcheck(s1[0], set))
		index++;
	while (s1_final--)
	{
		trimmed[index2++] = s1[index++];
	}
	trimmed[index2] = '\0';
	return (trimmed);
}
