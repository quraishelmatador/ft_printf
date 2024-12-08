/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktayabal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 07:45:55 by ktayabal          #+#    #+#             */
/*   Updated: 2024/12/05 07:45:58 by ktayabal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_lowhex_re(unsigned int n, int fd)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 16)
		count += ft_put_lowhex_re(n / 16, fd);
	c = "0123456789abcdef"[n % 16];
	count += ft_putchar_re(c, fd);
	return (count);
}
