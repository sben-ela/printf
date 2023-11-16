/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putunsig.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:28:48 by sben-ela          #+#    #+#             */
/*   Updated: 2022/11/02 23:32:00 by sben-ela         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_unsiglen(unsigned int nbr)
{
	int	size;

	size = 0;
	if (nbr == 0)
		size++;
	while (nbr > 0)
	{
		nbr = nbr / 10;
		size++;
	}
	return (size);
}

int	ft_putunsig(unsigned int nb)
{
	int	size;

	size = ft_unsiglen(nb);
	if (nb >= 10)
	{
		ft_putunsig(nb / 10);
		nb = nb % 10;
	}
	if (nb < 10)
		ft_putchar(nb + 48);
	return (size);
}
