/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_utoa_pf.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frenna <frenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/18 19:31:09 by Elena             #+#    #+#             */
/*   Updated: 2020/01/16 13:30:07 by frenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void					ft_utoa_pf(t_print *p, unsigned long long nbr)
{
	int					i;
	int					l;
	unsigned long long	n;
	char				*s;

	i = (p->dot && p->prec == 0 && nbr == 0) ? 0 : 1;
	n = nbr;
	while ((n /= 10) >= 1)
		i++;
	l = i;
	i = (p->prec > i) ? p->prec : i;
	if (p->deli && p->dot && p->prec >= 0)
		p->deli = 0;
	if (p->prec < 0)
		p->prec = 0;
	p->prec = (p->prec <= i) ? i : p->prec;
	i = (p->width > i) ? p->width : i;
	p->width = i;
	s = (char *)malloc(i * sizeof(char) + 1);
	ft_memset((void *)s, ' ', i);
	s[i] = '\0';
	make_s(p, s, l, nbr);
	buffer(p, s, p->width);
	free(s);
}
