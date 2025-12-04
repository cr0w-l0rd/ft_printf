/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   utils.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/12/03 15:38:17 by mbiusing          #+#    #+#             */
/*   Updated: 2025/12/04 23:59:37 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_putchar_pf(char c)
{
	return (ft_putchar_fd(c, STD_OUT), 1);
}

int	ft_putstr_pf(char *s)
{
	if (!s)
		return (write(STD_OUT, "(null)", 6));
	return (write(STD_OUT, s, ft_strlen(s)));
}