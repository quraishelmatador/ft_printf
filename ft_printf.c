/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktayabal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/12 17:29:17 by ktayabal          #+#    #+#             */
/*   Updated: 2024/05/12 17:29:19 by ktayabal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libftprintf.h"

static int	ft_format(char datatype, va_list args)
{
	if (datatype == 'c')
		ft_putchar_fd(va_arg(args, int), 1);
	else if (datatype == 's')
		ft_putstr_fd(va_arg(args, char *), 1);
	else if (datatype == 'p')
			ft_putptr_fd(va_arg(args, void *), 1);
	else if (datatype == 'd' || datatype == 'i')
		ft_putnbr_fd(va_arg(args, int), 1);
	else if (datatype == 'u')
		ft_putnbr_unsigned_fd(va_arg(args, unsigned int), 1);
	else if (datatype == 'x')
		ft_put_lowhex_fd(va_arg(args, int), 1);
	else if (datatype == 'X')
		ft_put_uphex_fd(va_arg(args, int), 1);
	else if (datatype == '%')
		ft_putchar_fd('%', 1);
	else
		return (-1);
	
	return (0);
}
int	ft_printf(const char *str, ...)
{
	int	i;
	va_list args;

	va_start(args, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (ft_format(str[i + 1], args) == -1)
				return (-1);
			i++;
		}
		else
			ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return 0;
}

