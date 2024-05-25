/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:01:12 by aabouqas          #+#    #+#             */
/*   Updated: 2024/05/25 15:21:53 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

int	ft_putchar_fd(char c, int fd)
{
	unsigned char	uc;

	if (fd < 0)
		return (-1);
	uc = (unsigned char)c;
	return (write (fd, &uc, 1));
}
