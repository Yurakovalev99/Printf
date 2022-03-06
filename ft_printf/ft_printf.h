/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ysachiko <ysachiko@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/10/24 15:06:47 by ysachiko          #+#    #+#             */
/*   Updated: 2021/12/13 19:29:36 by ysachiko         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <stdlib.h>
# include <unistd.h>

typedef struct s_printf
{
	va_list	args;
	int		len;
}			t_print;

int			ft_printf(const char *fmt, ...);
void		ft_putchar(char c);
void		ft_putstr(char *c);
char		*ft_strchr(const char *s, int c);
void		c_case(t_print *tab);
void		s_case(t_print *tab);
void		ft_putnbr(long int n, t_print *tab);
void		d_case(t_print *tab);
void		perc_case(t_print *tab);
void		putd(unsigned int i, t_print *tab);
void		u_case(t_print *tab);
void		putxlow(unsigned int i, t_print *tab);
void		x_case(t_print *tab);
void		putxup(unsigned int i, t_print *tab);
void		x_caseup(t_print *tab);
void		p_case(t_print *tab);
void		putp(unsigned long int i, t_print *tab);

#endif
