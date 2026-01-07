/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_num.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 00:03:10 by mbiusing          #+#    #+#             */
/*   Updated: 2026/01/07 13:54:14 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_pf(long n)
{
	int	written;

	written = 0;
	if (n < 0)
	{
		written += ft_putchar_pf('-');
		n = -n;
	}
	return (written + ft_putnbr_base_pf((unsigned long)n, DEC));
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

	if (!ptr)
		return (ft_putstr_pf("0x0"));
	addr = (unsigned long)ptr;
	ft_putstr_pf("0x");
	return (ft_strlen("0x") + ft_putnbr_base_pf(addr, HEX_LOW));
}
