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

#include "ft_printf.h"

static int	ft_format(char datatype, va_list args)
{
	int	char_count;

	char_count = 0;
	if (datatype == 'c')
		char_count = ft_putchar_re(va_arg(args, int), 1);
	else if (datatype == 's')
		char_count = ft_putstr_re(va_arg(args, char *), 1);
	else if (datatype == 'p')
		char_count = ft_putptr_re(va_arg(args, void *), 1);
	else if (datatype == 'd' || datatype == 'i')
		char_count = ft_putnbr_re(va_arg(args, int), 1);
	else if (datatype == 'u')
		char_count = ft_putnbr_unsigned_re(va_arg(args, unsigned int), 1);
	else if (datatype == 'x')
		char_count = ft_put_lowhex_re(va_arg(args, unsigned int), 1);
	else if (datatype == 'X')
		char_count = ft_put_uphex_re(va_arg(args, unsigned int), 1);
	else if (datatype == '%')
		char_count = ft_putchar_re('%', 1);
	return (char_count);
}

int	ft_printf(const char *str, ...)
{
	int		i;
	int		count;
	va_list	args;

	va_start(args, str);
	i = 0;
	count = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			count += ft_format(str[i + 1], args);
			i++;
		}
		else
		{
			ft_putchar_re(str[i], 1);
			count++;
		}
		i++;
	}
	va_end(args);
	return (count);
}
