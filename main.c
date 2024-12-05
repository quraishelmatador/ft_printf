#include "libftprintf.h"

int	main(void)
{
	char c = 'p';
	char str[] = "abc";
	int nb = 123;
	ft_printf("Test char c : %c\nTest int n : %i\nTest str : %s\n\n", c, nb, str);
	ft_puthex_fd(1453, 1);
}