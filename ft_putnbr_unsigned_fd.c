/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_unsigned_fd.c                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktayabal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 21:27:05 by ktayabal          #+#    #+#             */
/*   Updated: 2024/12/05 21:27:06 by ktayabal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

void	ft_putnbr_unsigned_fd(unsigned int n, int fd)
{
	char	c;

	if (n < 10)
	{
		c = n + '0';
		ft_putchar_fd(c, fd);
	}
	else
	{
		ft_putnbr_unsigned_fd(n / 10, fd);
		c = (n % 10) + '0';
		ft_putchar_fd(c, fd);
	}
}

