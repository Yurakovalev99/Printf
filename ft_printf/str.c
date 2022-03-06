/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   str.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysachiko <ysachiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:37:32 by ysachiko          #+#    #+#             */
/*   Updated: 2021/12/13 19:15:10 by ysachiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	c_case(t_print *tab)
{
	char	res;

	res = va_arg(tab->args, unsigned int);
	tab->len += 1;
	ft_putchar(res);
}

void	s_case(t_print *tab)
{
	char	*res;
	int		i;

	i = 0;
	res = va_arg(tab->args, char *);
	if (!res)
	{
		write(1, "(null)", 6);
		tab->len += 6;
		return ;
	}
	while (res[i] != '\0')
	{
		ft_putchar(res[i]);
		i++;
	}
	tab->len += i;
}

void	p_case(t_print *tab)
{
	unsigned long	res;

	res = va_arg(tab->args, unsigned long);
	ft_putstr("0x");
	tab->len += 2;
	putp(res, tab);
}
