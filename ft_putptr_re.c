/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putptr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktayabal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 22:02:11 by ktayabal          #+#    #+#             */
/*   Updated: 2024/12/05 22:02:12 by ktayabal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h" 

static int	ft_hexforp(uintptr_t n, int fd)
{
	int		count;
	char	c;

	count = 0;
	if (n >= 16)
		count += ft_hexforp(n / 16, fd);
	c = "0123456789abcdef"[n % 16];
	count += ft_putchar_re(c, fd);
	return (count);
}

int	ft_putptr_re(void *ptr, int fd)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_putstr_re("(nil)", fd));
	count += ft_putstr_re("0x", fd);
	count += ft_hexforp((uintptr_t)ptr, fd);
	return (count);
}
