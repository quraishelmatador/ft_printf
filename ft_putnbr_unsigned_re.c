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

int	ft_putnbr_unsigned_re(unsigned int n, int fd)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 10)
		count += ft_putnbr_unsigned_re(n / 10, fd);
	c = (n % 10) + '0';
	count += ft_putchar_re(c, fd);
	return (count);
}
