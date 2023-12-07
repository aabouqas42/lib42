/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/06 18:01:12 by aabouqas          #+#    #+#             */
/*   Updated: 2023/12/07 10:32:40 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

void	ft_putchar_fd(char c, int fd)
{
	unsigned char	cc;

	if (fd < 0)
		return ;
	cc = (unsigned char)c;
	write (fd, &cc, 1);
}
