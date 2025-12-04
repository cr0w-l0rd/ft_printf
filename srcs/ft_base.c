/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/05 00:06:20 by mbiusing          #+#    #+#             */
/*   Updated: 2025/12/05 01:33:23 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putnbr_base_pf(unsigned long n, char *base)
{
	char	buffer[32];
	int		len;
	int		i;
	int		written;

	len = ft_strlen(base);
	if (n == 0)
		return (ft_putchar_pf('0'));

	i = 0;
	while (n > 0)
	{
		buffer[i++] = base[n % len];
		n /= len;
	}
	written = 0;
	while (--i >= 0)
		written += ft_putchar_pf(buffer[i]);
	return (written);
}
