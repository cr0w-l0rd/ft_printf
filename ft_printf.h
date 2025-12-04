/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/11/28 16:48:25 by mbiusing          #+#    #+#             */
/*   Updated: 2025/12/05 01:34:42 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include "libft/libft.h"
# include <stdarg.h>
# include <unistd.h>

# define HEX_UP "0123456789ABCDEF"
# define HEX_LOW "0123456789abcdef"
# define DEC "0123456789"
# define STD_OUT 1

/* main */
int ft_printf(const char *str, ...);

/* formatter */
int ft_format(char spec, va_list args);

/* char/string */
int ft_putchar_pf(char c);
int ft_putstr_pf(char *s);

/* numbers */
int ft_putnbr_pf(int n);
int ft_putunbr_pf(unsigned long n);
int ft_puthex_pf(unsigned long n, char *base);
int ft_putptr_pf(void *ptr);

/* generic */
int ft_putnbr_base_pf(unsigned long n, char *base);

#endif