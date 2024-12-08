/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_re.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktayabal <ktayabal@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 09:04:45 by ktayabal          #+#    #+#             */
/*   Updated: 2024/04/17 09:04:58 by ktayabal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_putnbr_re(int n, int fd)
{
	int		count;
	char	c;

	count = 0;
	if (n == -2147483648)
	{
		count += ft_putstr_re("-2147483648", fd);
		return (count);
	}
	if (n < 0)
	{
		count += ft_putchar_re('-', fd);
		n = -n;
	}
	if (n >= 10)
		count += ft_putnbr_re(n / 10, fd);
	c = (n % 10) + '0';
	count += ft_putchar_re(c, fd);
	return (count);
}
