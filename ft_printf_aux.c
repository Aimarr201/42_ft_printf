/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_aux.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 19:58:19 by amendibi          #+#    #+#             */
/*   Updated: 2026/02/04 21:04:33 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "printf.h"

void	ft_printchar(char c, int *count)
{
	write(1, &c, 1);
	(*count)++;
}

void	ft_printstr(char *str, int *count)
{
	int	i;

	if (!str)
		return (ft_printstr("(null)", count));
	i = 0;
	while (str[i])
	{
		ft_printchar(str[i], count);
		i++;
	}
}

void	ft_printnumber(int n, int *count)
{
	if (n == -2147483648)
	{
		ft_printstr("-2147483648", count);
	}
	else if (n < 0)
	{
		ft_printchar('-', count);
		ft_printnumber(-n, count);
	}
	else if (n > 9)
	{
		ft_printnumber(n / 10, count);
		ft_printnumber(n % 10, count);
	}
	else
		ft_printchar((n % 10) + '0', count);
}

void	ft_printunsignednumber(unsigned int n, int *count)
{
	if (n > 9)
		ft_printunsignednumber(n / 10, count);
	ft_printchar((n % 10 + '0'), count);
}

void	ft_printpointer(size_t ptraddress, int *count)
{
	if (!ptraddress)
		ft_printstr("(nil)", count);
	else
	{
		ft_printstr("0x", count);
		ft_printhex(ptraddress, 'x', count);
	}
}
