/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/14 20:38:18 by aabouqas          #+#    #+#             */
/*   Updated: 2024/05/25 16:42:12 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

static int	expand_char(int fd, va_list args, const char c)
{
	if (c == 's')
		return (ft_putstr(fd, va_arg(args, char *)));
	if (c == 'c')
		return (ft_putchar_fd(va_arg(args, int), fd));
	if (c == 'd' || c == 'i')
		return (ft_print_number(fd, va_arg(args, int)));
	if (c == 'x')
		return (ft_putbase(fd, va_arg(args, unsigned int), HEXA_LW));
	if (c == 'X')
		return (ft_putbase(fd, va_arg(args, unsigned int), HEXA_UP));
	if (c == 'p')
		return (ft_pointer(fd, va_arg(args, unsigned long)));
	if (c == 'u')
		return (ft_unsigned(fd, va_arg(args, unsigned int)));
	if (c == '$')
		return (ft_putchar_fd(fd, '$'));
	return (ft_putchar_fd(c, fd));
}

static int	expand(int fd, int *size, va_list args, char c)
{
	int	res;

	res = expand_char(fd, args, c);
	if (res == -1)
		return (-1);
	*size += res;
	return (1);
}

int	print(int fd, const char *str, ...)
{
	int		size;
	va_list	args;

	va_start (args, str);
	while (*str)
	{
		if (*str == '$')
		{
			if (expand(fd, &size, args, *(str + 1)) == -1)
				return (va_end(args), -1);
			str += 2;
		}
		else if (*str != '\0')
		{
			if (ft_putchar_fd(*str, fd) == -1)
				return (-1);
			str++;
			size++;
		}
	}
	va_end(args);
	return (size);
}
