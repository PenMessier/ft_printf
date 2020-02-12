/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_buffer.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frenna <frenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/25 11:44:18 by frenna            #+#    #+#             */
/*   Updated: 2020/01/15 14:33:05 by frenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void	buffer(t_print *p, char *s, int l)
{
	ft_strncpy((p->buff + p->l), s, (size_t)l);
	p->l = p->l + l;
}

void	ft_putstr(t_print *p)
{
	if (p->col == 'd' || p->col == 'D' || p->col == 'i')
		write(1, RED, 6);
	else if (p->col == 'U' || p->col == 'u')
		write(1, GREEN, 6);
	else if (p->col == 'x' || p->col == 'X')
		write(1, YELLOW, 6);
	else if (p->col == 'o' || p->col == 'O')
		write(1, BLUE, 6);
	else if (p->col == 'f' || p->col == 'F')
		write(1, MAGENTA, 6);
	else if (p->col == 'c' || p->col == 'C' || p->col == 'S'
	|| p->col == 's' || p->col == 'p')
		write(1, CYAN, 6);
	write(1, p->buff, p->l);
	if (p->col != 0)
		write(1, EOC, 5);
}
