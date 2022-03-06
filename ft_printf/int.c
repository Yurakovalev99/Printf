/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   int.c                                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysachiko <ysachiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 17:58:08 by ysachiko          #+#    #+#             */
/*   Updated: 2021/12/13 19:27:22 by ysachiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	d_case(t_print *tab)
{
	int	res;

	res = va_arg(tab->args, long int);
	ft_putnbr(res, tab);
}

void	u_case(t_print *tab)
{
	int	res;

	res = va_arg(tab->args, int);
	putd(res, tab);
}

void	perc_case(t_print *tab)
{
	ft_putchar('%');
	tab->len += 1;
}

void	x_case(t_print *tab)
{
	int	res;

	res = va_arg(tab->args, int);
	putxlow(res, tab);
}

void	x_caseup(t_print *tab)
{
	int	res;

	res = va_arg(tab->args, int);
	putxup(res, tab);
}
