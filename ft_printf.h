/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sben-ela <sben-ela@student.42seoul.kr>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/02 23:33:17 by sben-ela          #+#    #+#             */
/*   Updated: 2022/11/03 13:21:22 by sben-ela         ###   ########seoul.kr  */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include	<stdarg.h>
# include	<unistd.h>

int		ft_printf(const char *s, ...);
int		ft_putchar(int c);
int		ft_putstr(char *str);
int		ft_puthexa(unsigned int n, char c);
int		ft_putnbr(int nb);
int		ft_putunsig(unsigned int nb);
int		ft_convert_p(void *n, char c);
#endif
