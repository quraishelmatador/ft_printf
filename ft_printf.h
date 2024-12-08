/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktayabal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/03 08:20:19 by ktayabal          #+#    #+#             */
/*   Updated: 2024/12/03 08:20:31 by ktayabal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
int	ft_putchar_re(char c, int fd);
int	ft_putnbr_re(int n, int fd);
int	ft_putstr_re(char *s, int fd);
int	ft_put_lowhex_re(unsigned int n, int fd);
int	ft_put_uphex_re(unsigned int n, int fd);
int	ft_putnbr_unsigned_re(unsigned int n, int fd);
int	ft_putptr_re(void *ptr, int fd);

#endif
