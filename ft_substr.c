/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celeste <celeste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 11:51:06 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/11 17:36:25 by celeste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_okcool(size_t i, size_t j)
{
	if (i < j)
		return (i);
	else
		return (j);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*newchar;

	if (!s)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	s = s + start;
	len = ft_okcool(len, ft_strlen(s));
	newchar = ft_calloc(1, len + 1);
	if (!newchar)
		return (NULL);
	newchar = ft_memcpy(newchar, s, len);
	return (newchar);
}
