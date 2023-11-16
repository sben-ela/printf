/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthexa.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:20:45 by sben-ela          #+#    #+#             */
/*   Updated: 2022/11/03 20:10:38 by sben-ela         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_size_n(unsigned int n)
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

int	ft_puthexa(unsigned int n, char c)
{
	char	*str;
	int		size;

	if (!n)
	{
		write(1, "0", 1);
		return (1);
	}
	size = ft_size_n(n);
	if (c == 'x')
		str = "0123456789abcdef";
	else if (c == 'X')
		str = "0123456789ABCDEF";
	if (n > 15)
	{
		ft_puthexa((n / 16), c);
		ft_puthexa((n % 16), c);
	}
	else
	{
		ft_putchar(str[n]);
	}
	return (size);
}
