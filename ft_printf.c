/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/02 16:38:30 by amendibi          #+#    #+#             */
/*   Updated: 2026/02/04 21:03:58 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printhex(unsigned long n, int format, int *count)
{
	char	*base;

	if (format == 'X')
		base = "0123456789ABCDEF";
	else
		base = "0123456789abcdef";
	if (n >= 16)
		ft_printhex(n / 16, format, count);
	ft_printchar(base[n % 16], count);
}

static void	ft_datatype(char digit, va_list list, int *count)
{
	if (digit == 'c')
		ft_printchar(va_arg(list, int), count);
	else if (digit == '%')
		ft_printchar('%', count);
	else if (digit == 's')
		ft_printstr(va_arg(list, char *), count);
	else if (digit == 'i' || digit == 'd')
		ft_printnumber(va_arg(list, int), count);
	else if (digit == 'u')
		ft_printunsignednumber(va_arg(list, unsigned int), count);
	else if (digit == 'p')
		ft_printpointer(va_arg(list, size_t), count);
	else if (digit == 'x')
		ft_printhex(va_arg(list, unsigned int), 'x', count);
	else if (digit == 'X')
		ft_printhex(va_arg(list, unsigned int), 'X', count);
}

int	ft_printf(char const *str, ...)
{
	va_list	list;
	int		i;
	int		count;

	va_start(list, str);
	i = 0;
	count = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			ft_datatype(str[i], list, &count);
		}
		else
			ft_printchar(str[i], &count);
		i++;
	}
	va_end(list);
	return (count);
}
