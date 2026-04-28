/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   printf.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: amendibi <amendibi@student.42urduliz.co    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/04 17:34:46 by amendibi          #+#    #+#             */
/*   Updated: 2026/04/28 19:32:07 by amendibi         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

int		ft_printf(char const *str, ...);
void	ft_printchar(char c, int *count);
void	ft_printstr(char *str, int *count);
void	ft_printnumber(int n, int *count);
void	ft_printunsignednumber(unsigned int n, int *count);
void	ft_printpointer(size_t ptr, int *count);
void	ft_printhex(unsigned long n, int format, int *count);

#endif
