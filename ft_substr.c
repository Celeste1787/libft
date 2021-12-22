/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/22 18:46:51 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/22 18:46:56 by adovleto         ###   ########.fr       */
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
