/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 19:50:24 by sben-ela          #+#    #+#             */
/*   Updated: 2022/11/03 20:05:20 by sben-ela         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_put(const char *s, va_list av, int i, int count)
{
	while (s[i])
	{
		if (s[i] == '%' && s[i + 1])
		{
			if (s[i + 1] == 'c')
				count += ft_putchar(va_arg(av, int));
			else if (s[i + 1] == 's')
				count += ft_putstr(va_arg(av, char *));
			else if (s[i + 1] == 'd' || s [i + 1] == 'i')
				count += ft_putnbr(va_arg(av, int));
			else if (s[i + 1] == 'u')
				count += ft_putunsig(va_arg(av, unsigned int));
			else if (s[i + 1] == 'x' || s[i + 1] == 'X')
				count += ft_puthexa(va_arg(av, unsigned int), s[i + 1]);
			else if (s[i + 1] == 'p')
				count += ft_convert_p(va_arg(av, void *), 'p');
			else if (s[i + 1] == '%')
				count += ft_putchar('%');
			i++;
		}
		else if (s[i] != '%')
			count += ft_putchar(s [i]);
		i++;
	}
	return (count);
}

int	ft_printf(const char *s, ...)
{
	int		i;
	int		count;
	va_list	av;

	count = 0;
	i = 0;
	va_start(av, s);
	return (ft_put(s, av, i, count));
}
