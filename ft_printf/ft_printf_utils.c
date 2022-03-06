/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf_utils.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysachiko <ysachiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/12/06 12:44:27 by ysachiko          #+#    #+#             */
/*   Updated: 2021/12/13 19:26:58 by ysachiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	ft_putstr(char *c)
{
	int	i;

	i = 0;
	while (c[i] != '\0')
	{
		write(1, &c[i], 1);
		i++;
	}
}

char	*ft_strchr(const char *s, int c)
{
	size_t	i;
	char	*str;

	str = (char *)s;
	i = 0;
	while (str[i] != c && str[i] != '\0')
		i++;
	if (str[i] != c)
		return (0);
	return (&str[i]);
}

void	ft_putnbr(long int n, t_print *tab)
{
	char	a;

	if (n < 0)
	{
		write(1, "-", sizeof(char));
		tab->len += 1;
	}
	while (n / 10 != 0)
	{
		if (n > 0)
			n = -n;
		ft_putnbr((-1) * (n / 10), tab);
		n = (-1) * n % 10;
	}
	if (n < 0)
		n = -n;
	a = n + '0';
	write(1, &a, sizeof(char));
	tab->len += 1;
}
