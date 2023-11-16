/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_convert_p.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:40:09 by sben-ela          #+#    #+#             */
/*   Updated: 2022/11/03 16:10:22 by sben-ela         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_lenp(unsigned long long n)
{
	int	size;

	size = 0;
	while (n != 0)
	{
		size ++;
		n = n / 16;
	}
	return (size);
}

void	conv_p(unsigned long long n, char c)
{
	char	*str;

	str = "0123456789abcdef";
	if (n > 15)
	{
		conv_p((n / 16), c);
		conv_p((n % 16), c);
	}
	else
	{
		ft_putchar(str[n]);
	}
}

int	ft_convert_p(void *nbr, char c)
{
	unsigned long long	n;

	write(1, "0x", 2);
	if (!nbr)
	{
		write(1, "0", 1);
		return (3);
	}
	n = (unsigned long long)nbr;
	conv_p(n, c);
	return (ft_lenp(n) + 2);
}
