/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:42:31 by mbiusing          #+#    #+#             */
/*   Updated: 2026/02/18 17:47:04 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_format(char c, va_list args)
{
	if (c == 'c')
		return (ft_putchar_pf(va_arg(args, int)));
	else if (c == 's')
		return (ft_putstr_pf(va_arg(args, char *)));
	else if (c == 'p')
		return (ft_putptr_pf(va_arg(args, void *)));
	else if (c == 'd' || c == 'i')
		return (ft_putnbr_pf((long)va_arg(args, int)));
	else if (c == 'u')
		return (ft_putunbr_pf(va_arg(args, unsigned int)));
	else if (c == 'x')
		return (ft_puthex_pf(va_arg(args, unsigned int), HEX_LOW));
	else if (c == 'X')
		return (ft_puthex_pf(va_arg(args, unsigned int), HEX_UP));
	else if (c == '%')
		return (ft_putchar_pf('%'));
	return (0);
}

/*	DESC:
	printf() family produce output according to a format
	RETURN VALUE:	
	Upon successful return, these functions return the number of bytes printed 
	(excluding the null byte used to end output to strings).
	FORMAT;
	• %c Prints a single character.
	• %s Prints a string (as defined by the common C convention).
	• %p The void * pointer argument has to be printed in hexadecimal format.
	• %d Prints a decimal (base 10) number.
	• %i Prints an integer in base 10.
	• %u Prints an unsigned decimal (base 10) number.
	• %x Prints a number in hexadecimal (base 16) lowercase format.
	• %X Prints a number in hexadecimal (base 16) uppercase format.
	• %% Prints a percent sign.
*/
int	ft_printf(const char *str, ...)
{
	va_list	n_arg;
	int		bytes;
	int		i;

	va_start(n_arg, str);
	bytes = 0;
	i = 0;
	while (str[i])
	{
		if (str[i] == '%')
		{
			i++;
			if (!str[i])
				break ;
			bytes += ft_format(str[i], n_arg);
		}
		else
			bytes += ft_putchar_pf(str[i]);
		i++;
	}
	va_end(n_arg);
	return (bytes);
}
