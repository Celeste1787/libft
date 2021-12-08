/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 14:26:39 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/07 16:21:21 by adovleto         ###   ########.fr       */
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

char	*ft_strndup(char const *s, int size, size_t start)
{
	static int		j;
	char			*p;

	j = 0;
	p = (char *) malloc(sizeof(char) * (size + 1));
	if (!p)
		return (NULL);
	j = 0;
	while (s[start] && j < size)
	{
		p[j] = s[start + j];
		j++;
	}
	p[j] = '\0';
	return (p);
}

char	**ft_split(char const *s, char c)
{
	size_t		index;
	static int	v;
	char		**splitter;

	index = 0;
	v = 0;
	splitter = malloc(sizeof(char *) * (ft_wordcount(s, c) + 1));
	if (!splitter)
		return (NULL);
	while (s[index] && v < ft_wordcount(s, c))
	{
		if (!ft_charcheck(s[index], c))
		{
			splitter[v] = ft_strndup(s, ft_charcount(s, c, index), index);
			if (!splitter[v])
				return (NULL);
			v++;
			while (!ft_charcheck(s[index], c) && s[index])
				index++;
		}
		else
			index++;
	}
	splitter[v] = NULL;
	return (splitter);
}
