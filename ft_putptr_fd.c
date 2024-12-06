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

void	ft_putptr_fd(void *ptr, int fd)
{
	if (!ptr)
		ft_putstr_fd("(nil)", fd);
	else
	{
		ft_putstr_fd("0x", fd);
		ft_put_lowhex_fd((uintptr_t)ptr, fd);
	}
}
