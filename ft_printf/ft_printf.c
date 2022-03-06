/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysachiko <ysachiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/13 16:25:47 by ysachiko          #+#    #+#             */
/*   Updated: 2021/12/17 15:05:12 by ysachiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

static void	ft_case(char c, t_print *tab)
{
	if (c == 'c')
		c_case(tab);
	if (c == 's')
		s_case(tab);
	if (c == 'd' || c == 'i')
		d_case(tab);
	if (c == '%')
		perc_case(tab);
	if (c == 'u')
		u_case(tab);
	if (c == 'x')
		x_case(tab);
	if (c == 'X')
		x_caseup(tab);
	if (c == 'p')
		p_case(tab);
}

static void	ft_putchar_tab(char c, t_print *tab)
{
	write(1, &c, 1);
	tab->len += 1;
}

int	ft_printf(const char *fmt, ...)
{
	int		i;
	t_print	*tab;

	tab = malloc(sizeof(t_print));
	if (!tab)
		return (0);
	tab->len = 0;
	i = -1;
	va_start(tab->args, fmt);
	while (fmt[++i])
	{
		if (fmt[i] == '%')
		{
			if (ft_strchr("cspdiuxX%", fmt[i + 1]))
				ft_case(fmt[i++ + 1], tab);
		}
		else
			ft_putchar_tab(fmt[i], tab);
	}
	va_end(tab->args);
	i = tab->len;
	free(tab);
	return (i);
}
