/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frenna <frenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/04 14:18:14 by frenna            #+#    #+#             */
/*   Updated: 2019/12/25 12:07:40 by frenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

void				*ft_memset(void *str, int c, size_t n)
{
	unsigned char	*s;

	if (n == 0)
		return (str);
	s = (unsigned char *)str;
	while (n)
	{
		*s = (unsigned char)c;
		s++;
		n--;
	}
	return (str);
}
