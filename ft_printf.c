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

int	ft_printf(const char *str, ...)
{
	int	str_len;
	int	i;
	char	c;

	str_len = ft_strlen(str);
	va_list args;
	va_start(args, str);
	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] == '%')
		{
			if (str[i + 1] == 'c')
			{
				c = (char)va_arg(args, int);
				ft_putchar_fd(c, 1);
			}
				
			else if (str[i + 1] == 's')
				ft_putstr_fd(va_arg(args, char *), 1);
			else if (str[i + 1] == 'i')
				ft_putnbr_fd(va_arg(args, int), 1);
			else if (str[i + 1] == '%')
				ft_putchar_fd(va_arg(args, int), 1);
			i++;
		}
		else
			ft_putchar_fd(str[i], 1);
		i++;
	}
	va_end(args);
	return 0;
}

