/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_number.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/15 15:02:46 by aabouqas          #+#    #+#             */
/*   Updated: 2023/12/07 10:32:36 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

int	ft_print_number(int num)
{
	char	*str;

	str = ft_itoa(num);
	ft_putstr_fd(str, 1);
	return (ft_strlen(str));
}
