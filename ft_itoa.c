/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: celeste <celeste@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/07 16:22:01 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/15 12:27:38 by celeste          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_digitsize(int n)
{
	static int	digitsize;

	digitsize = 0;
	if (n == 0)
		return (1);
	while (n != 0)
	{
		n /= 10;
		digitsize++;
	}
	return (digitsize);
}

char	*ft_nitoa(int n)
{
	long int	tmpn;
	int			iter;
	char		*nb;

	tmpn = (long int) n;
	tmpn *= -1;
	iter = ft_digitsize(n);
	nb = malloc(sizeof(char) * iter + 2);
	if (!nb)
		return (NULL);
	nb[iter + 1] = '\0';
	nb [0] = '-';
	while (iter)
	{
		nb[iter--] = tmpn % 10 + 48;
		tmpn /= 10;
	}
	return (nb);
}

char	*ft_itoa(int n)
{
	char	*nb;
	int		iter;

	if (n < 0)
		return (ft_nitoa(n));
	iter = ft_digitsize(n);
	nb = malloc(sizeof(char) * iter + 1);
	if (!nb)
		return (NULL);
	nb[iter] = '\0';
	while (iter--)
	{
		nb[iter] = n % 10 + 48;
		n /= 10;
	}
	return (nb);
}
