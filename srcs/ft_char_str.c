/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_char_str.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:38:17 by mbiusing          #+#    #+#             */
/*   Updated: 2026/02/18 17:57:54 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_pf(char c)
{
	ft_putchar_fd(c, STD_OUT);
	return (1);
}

int	ft_putstr_pf(char *s)
{
	if (!s)
		return (write(STD_OUT, "(null)", 6));
	return (write(STD_OUT, s, ft_strlen(s)));
}
