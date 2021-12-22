/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:26:39 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/22 18:44:25 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_charcheck(char s, char c)
{
	if (s == c)
		return (1);
	return (0);
}

static int	ft_charcount(char const *s, char c, size_t index)
{
	static int	charcount;

	charcount = 0;
	while (s[index] && ft_charcheck(s[index], c))
		index++;
	while (s[index] && !ft_charcheck(s[index], c))
	{
		charcount++;
		index++;
	}
	return (charcount);
}

static int	ft_wordcount(char const *s, char c)
{
	static int	wc;
	size_t		index;

	wc = 0;
	index = 0;
	while (s[index])
	{
		if (!ft_charcheck(s[index], c))
		{
			wc++;
			while (!ft_charcheck(s[index], c) && s[index])
				index++;
		}
		else
			index++;
	}
	return (wc);
}

static char	**ft_freedom(char **splitter, int v)
{
	while (v--)
	{
		free(splitter[v]);
	}
	free(splitter);
	return (NULL);
}

char	**ft_split(char const *s, char c)
{
	size_t		index;
	static int	v;
	char		**splitter;

	index = 0;
	v = 0;
	if (!s)
		return (NULL);
	splitter = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!splitter)
		return (NULL);
	while (s[index] && v < ft_wordcount(s, c))
	{
		if (!ft_charcheck(s[index], c))
		{
			splitter[v] = ft_substr(s, index, ft_charcount(s, c, index));
			if (!splitter[v++])
				return (ft_freedom(splitter, v));
			index += ft_charcount(s, c, index);
		}
		else
			index++;
	}
	splitter[v] = NULL;
	return (splitter);
}
