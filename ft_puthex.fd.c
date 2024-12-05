/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   puthex_fd.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ktayabal <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/05 07:45:55 by ktayabal          #+#    #+#             */
/*   Updated: 2024/12/05 07:45:58 by ktayabal         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libftprintf.h"

static int	count_m(int n)
{
	int	count;
	int	i;

	count = n;
	i = 0;
	while (count != 0)
	{
		count /= 16;
		i++;
	}
	return (i);
}

void	ft_puthex_fd(int n, int fd)
{
	int	count;
	int	*iarray;

	count = count_m(n);
	iarray = (int *)malloc(count * sizeof(int));

	while (n != 0)
	{
		iarray[count--] = n % 16;
		n /= 16;
	}
	printf("[");
    	for (int i = 0; i < 3; i++)
    	{
        	printf("%d", iarray[i]);
        	if (i < 3 - 1) // Add a comma and space between elements
            		printf(", ");
    	}
    	printf("]\n");
}
