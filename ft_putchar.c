/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 09:52:05 by aabouqas          #+#    #+#             */
/*   Updated: 2023/12/07 10:32:42 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

int	ft_putchar(int c)
{
	return (write (1, &c, 1));
}
