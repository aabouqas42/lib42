/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_pointer.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 17:50:24 by aabouqas          #+#    #+#             */
/*   Updated: 2024/05/25 15:51:21 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

int	ft_pointer(int fd, unsigned long ptr)
{
	char	*str;
	char	*base;
	int		len;

	if (ptr == 0)
		return (ft_putstr(fd, "0x0"));
	base = HEXA_LW;
	len = get_base_length(ptr, 16);
	str = ft_calloc(len + 1, 1);
	if (str == NULL)
		return (-1);
	if (ft_putstr (fd, "0x") == -1)
		return (free(str), -1);
	len -= 1;
	while (ptr)
	{
		str[len] = base[ptr % 16];
		ptr /= 16;
		len--;
	}
	if (ft_putstr(fd, str) == -1)
		return (free (str), -1);
	len = ft_strlen(str);
	return (free (str), len + 2);
}
