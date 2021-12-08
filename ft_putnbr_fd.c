/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: adovleto <adovleto@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/08 12:51:32 by adovleto          #+#    #+#             */
/*   Updated: 2021/12/08 13:08:06 by adovleto         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	long int	tmpnb;

	tmpnb = (long int) n;
	if (tmpnb < 0)
	{
		tmpnb *= -1;
		ft_putchar_fd('-', fd);
	}
	if (tmpnb >= 0 && tmpnb <= 9)
		ft_putchar_fd(tmpnb + 48, fd);
	if (tmpnb > 9)
	{
		ft_putnbr_fd(tmpnb / 10, fd);
		ft_putchar_fd((tmpnb % 10) + 48, fd);
	}
}
