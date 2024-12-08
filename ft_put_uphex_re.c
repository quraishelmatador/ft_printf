/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   put_uphex_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktayabal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 20:37:58 by ktayabal          #+#    #+#             */
/*   Updated: 2024/12/05 20:38:01 by ktayabal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

int	ft_put_uphex_re(unsigned int n, int fd)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 16)
		count += ft_put_uphex_re(n / 16, fd);
	c = "0123456789ABCDEF"[n % 16];
	count += ft_putchar_re(c, fd);
	return (count);
}
