/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktayabal <ktayabal@student.42london.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/17 08:25:43 by ktayabal          #+#    #+#             */
/*   Updated: 2024/04/17 08:25:45 by ktayabal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putstr_re(char *s, int fd)
{
	int	count;

	count = 0;
	if (!s)
	{
		write(fd, "(null)", 6);
		return (6);
	}
	while (s[count])
	{
		write(fd, &s[count], 1);
		count++;
	}
	return (count);
}
