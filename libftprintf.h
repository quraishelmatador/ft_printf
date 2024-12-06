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

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdlib.h>
# include <stdint.h>
# include <stdarg.h>

int	ft_printf(const char *str, ...);
size_t	ft_strlen(const char *s);
void	ft_putchar_fd(char c, int fd);
void	ft_putnbr_fd(int n, int fd);
void	ft_putstr_fd(char *s, int fd);
void	ft_put_lowhex_fd(uintptr_t n, int fd);
void	ft_put_uphex_fd(uintptr_t n, int fd);
void	ft_putnbr_unsigned_fd(unsigned int n, int fd);
void	ft_putptr_fd(void *ptr, int fd);





#endif
