/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 00:03:10 by mbiusing          #+#    #+#             */
/*   Updated: 2026/02/23 21:05:25 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(long n)
{
	unsigned long	nb;
	int				written;

	written = 0;
	if (n < 0)
	{
		written += ft_putchar_pf('-');
		nb = (unsigned long)(-(n + 1)) + 1;
	}
	else
		nb = (unsigned long)n;
	return (written + ft_putnbr_base_pf(nb, DEC));
}

int	ft_putunbr_pf(unsigned long n)
{
	return (ft_putnbr_base_pf(n, DEC));
}

int	ft_puthex_pf(unsigned long n, char *base)
{
	return (ft_putnbr_base_pf(n, base));
}

int	ft_putptr_pf(void *ptr)
{
	unsigned long	addr;
	int				written;

	if (!ptr)
		return (ft_putstr_pf("(nil)"));
	addr = (unsigned long)ptr;
	written = ft_putstr_pf("0x");
	written += ft_putnbr_base_pf(addr, HEX_LOW);
	return (written);
}
