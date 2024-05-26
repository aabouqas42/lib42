/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_base.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:29:27 by aabouqas          #+#    #+#             */
/*   Updated: 2024/05/26 09:35:31 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

int	ft_putbase(int fd, unsigned int num, char *base)
{
	char	*str;
	int		len;

	if (num == 0)
		return (ft_putchar_fd('\0', fd));
	len = get_base_length(num, 16);
	str = ft_calloc (len + 1, 1);
	if (str == NULL)
		return (-1);
	len -= 1;
	while (num)
	{
		str[len] = base[num % 16];
		num /= 16;
		len--;
	}
	if (ft_putstr(fd, str) == -1)
		return (free (str), -1);
	len = ft_strlen(str);
	return (free (str), len);
}
