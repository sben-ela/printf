/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:26:26 by sben-ela          #+#    #+#             */
/*   Updated: 2022/11/03 18:37:55 by sben-ela         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_nbrlen(int nbr)
{
	int	size;

	size = 0;
	if (nbr < 0)
	{
		nbr = nbr * -1;
		size++;
	}
	else if (nbr == 0)
		size++;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

int	ft_putnbr(int nb)
{
	int	size;

	if (nb == -2147483648)
	{
		ft_putstr("-2147483648");
		return (11);
	}
	size = ft_nbrlen(nb);
	if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
	}
	if (nb >= 10)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	if (nb < 10)
		ft_putchar(nb + 48);
	return (size);
}
