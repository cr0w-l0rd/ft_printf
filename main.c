/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mbiusing <mbiusing@student.42kl.edu.my>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/02/28 16:39:03 by mbiusing          #+#    #+#             */
/*   Updated: 2026/02/28 17:34:33 by mbiusing         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int	main(void)
{
	int		meow;
	char	*heap_ptr;

	meow = 42;
	heap_ptr = (char *)malloc(1);

	ft_printf("\nft_printf	: (%%c) single char : %c | %c | %c | %c | %c | %c\n",
		'A', '0', '\n', 0, 127, -1);
	printf("printf		: (%%c) single char : %c | %c | %c | %c | %c | %c\n\n",
		'A', '0', '\n', 0, 127, -1);


	ft_printf("ft_printf	: (%%s) string : %s | %s | %s\n",
		"meow woof moo", (char *) NULL, "");
	printf("printf		: (%%s) string : %s | %s | %s\n\n",
		"meow woof moo", (char *) NULL, "");


	ft_printf("ft_printf	: (%%p) pointer : %p | %p | %p\n",
		(void *)&meow, (void *) NULL, (void *)heap_ptr);
	printf("printf		: (%%p) pointer : %p | %p | %p\n\n",
		(void *)&meow, (void *) NULL, (void *)heap_ptr);


	ft_printf("ft_printf	: (%%d/%%i) signed : %d | %i | %d | %d | %d\n",
		42, -42, 0, INT_MAX, INT_MIN);
	printf("printf		: (%%d/%%i) signed : %d | %i | %d | %d | %d\n\n",
		42, -42, 0, INT_MAX, INT_MIN);


	ft_printf("ft_printf	: (%%u) unsigned : %u | %u | %u | %u\n",
		0u, 42u, 4294967295u, (unsigned int)-1);
	printf("printf		: (%%u) unsigned : %u | %u | %u | %u\n\n",
		0u, 42u, 4294967295u, (unsigned int)-1);


	ft_printf("ft_printf	: (%%x) hex low  : %x | %x | %x | %x\n",
		0u, 42u, 255u, (unsigned int)-1);
	printf("printf		: (%%x) hex low  : %x | %x | %x | %x\n\n",
		0u, 42u, 255u, (unsigned int)-1);


	ft_printf("ft_printf	: (%%X) hex up   : %X | %X | %X | %X\n",
		0u, 42u, 255u, (unsigned int)-1);
	printf("printf		: (%%X) hex up   : %X | %X | %X | %X\n\n",
		0u, 42u, 255u, (unsigned int)-1);


	ft_printf("ft_printf	: (%%%%) percent : %% | 100%% done | %%%% %%%% %%%%\n");
	printf("printf		: (%%%%) percent : %% | 100%% done | %%%% %%%% %%%%\n\n");


	ft_printf("ft_printf\t: mixed : c = %c | s = %s | p = %p | d = %d | u = %u | x = %x | X = %X | %%\n",
	'Z', "mix", (void *)&meow, -123, 123u, 0xabc, 0xabc);
	printf("printf		: mixed : c = %c | s = %s | p = %p | d = %d | u = %u | x = %x | X = %X | %%\n\n",
	'Z', "mix", (void *)&meow, -123, 123u, 0xabc, 0xabc);

	ft_printf("");
	printf("");

	free(heap_ptr);
	return (0);
}

