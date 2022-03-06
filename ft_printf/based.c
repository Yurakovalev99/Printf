/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   based.c                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysachiko <ysachiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:30:55 by ysachiko          #+#    #+#             */
/*   Updated: 2021/12/13 19:29:15 by ysachiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	putd(unsigned int i, t_print *tab)
{
	char	*base;

	base = "0123456789";
	if (i >= 10)
	{
		putd(i / 10, tab);
		putd(i % 10, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len += 1;
	}
}

void	putxlow(unsigned int i, t_print *tab)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{
		putxlow(i / 16, tab);
		putxlow(i % 16, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len += 1;
	}
}

void	putxup(unsigned int i, t_print *tab)
{
	char	*base;

	base = "0123456789ABCDEF";
	if (i >= 16)
	{
		putxup(i / 16, tab);
		putxup(i % 16, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len += 1;
	}
}

void	putp(unsigned long int i, t_print *tab)
{
	char	*base;

	base = "0123456789abcdef";
	if (i >= 16)
	{
		putp(i / 16, tab);
		putp(i % 16, tab);
	}
	else
	{
		ft_putchar(base[i]);
		tab->len += 1;
	}
}
