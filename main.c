
#include "printf.h"
#include <stdio.h>

int	main(void)
{
	char	*str;
	char	c;
	int 	x;
	void	*ptr;

	c = 'a';
	str = "Estamos porque hemos venido, que si no, no hubiera pasado nada";
	x = 123;
	ptr = &x;
	ft_printf("El caracter es %c\n", c);
	printf("El caracter es %c\n", c);
	ft_printf("String: %s\n", str);
	printf("String: %s\n", str);
	ft_printf("Puntero: %p\n", ptr);
	printf("Puntero: %p\n", ptr);
	ft_printf("Int max: %d, Int min: %i\n", 0, -521);
	printf("Int max: %d, Int max: %i\n", 0, 521);
	ft_printf("Unsigned int: %u\n", 4294967295);
	printf("Unsigned int: %u\n", 429496729);
	ft_printf("Hexadecimal en minuscula: %x\n", 255);
	printf("Hexadecimal en minuscula:: %x\n", 255);
	ft_printf("Hexadecimal en minuscula: %X\n", 255);
}
