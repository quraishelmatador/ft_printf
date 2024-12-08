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

#include "libftprintf.h" 

int	ft_putptr_re(void *ptr, int fd)
{
	int	count;

	count = 0;
	if (!ptr)
		return (ft_putstr_re("(nil)", fd));
	count += ft_putstr_re("0x", fd);
	count += ft_put_lowhex_re((uintptr_t)ptr, fd);
	return (count);
}
