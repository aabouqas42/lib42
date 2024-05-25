/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_unsigned.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 18:31:41 by aabouqas          #+#    #+#             */
/*   Updated: 2024/05/25 15:52:39 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

int	ft_unsigned(int fd, unsigned int num)
{
	char	*str;
	int		len;

	if (num == 0)
		return (ft_putchar('0'));
	len = get_base_length(num, 10);
	str = ft_calloc(len + 1, 1);
	if (str == NULL)
		return (-1);
	len -= 1;
	while (num)
	{
		str[len] = (num % 10) + 48;
		num /= 10;
		len--;
	}
	if (ft_putstr(fd, str) == -1)
		return (free (str), -1);
	len = ft_strlen(str);
	free (str);
	return (len);
}
