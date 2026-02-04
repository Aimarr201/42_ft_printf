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

static void	ft_datatype(char digit, va_list list, int *count)
{
	if (digit == 'c')
		ft_printchar(va_arg(list, int), count);
	else if (digit == '%')
		ft_printchar('%', count);
	else if (digit == 's')
		ft_printstr(va_arg(list, char *), count);

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
