/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aabouqas <aabouqas@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/05 15:57:51 by aabouqas          #+#    #+#             */
/*   Updated: 2023/12/07 10:31:43 by aabouqas         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "aabouqas42.h"

static int	intlen(int n)
{
	int	len;

	len = 0;
	if (n < 0)
	{
		len++;
		n *= (-1);
	}
	while (n)
	{
		n /= 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		len;

	if (n == 0)
		return (ft_strdup("0"));
	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = intlen(n);
	str = malloc (len + 1);
	if (!str)
		return (NULL);
	if (n < 0)
	{
		str[0] = '-';
		n *= (-1);
	}
	str[len--] = '\0';
	while (n)
	{
		str[len--] = (n % 10) + 48;
		n /= 10;
	}
	return (str);
}
