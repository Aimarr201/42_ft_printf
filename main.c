
#include "printf.h"
#include <stdio.h>

int	main(void)
{
	char	c = 'C';
	char	str[] = "string";
	   printf("Aaaa%saa%ca%%a\n", str, c);
	ft_printf("Aaaa%saa%ca%%a\n", str, c);
	return (0);
}