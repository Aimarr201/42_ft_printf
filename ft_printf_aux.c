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
	(*count) += 1;
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
