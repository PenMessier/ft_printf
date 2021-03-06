/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   is_valid.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frenna <frenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/16 10:40:18 by frenna            #+#    #+#             */
/*   Updated: 2020/01/15 12:45:58 by frenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

char		is_converse(char c)
{
	char	*s;

	s = "%dDioOuUxXeEfFcCsSp%";
	while (*s)
	{
		if (c == *s)
			return (c);
		s++;
	}
	return (0);
}

char		is_modifier(char c)
{
	char	*s;

	s = "zjhlL";
	while (*s)
	{
		if (c == *s)
			return (c);
		s++;
	}
	return (0);
}

char		is_flag(char c)
{
	char	*s;

	s = "#0-+ ";
	while (*s)
	{
		if (c == *s)
			return (c);
		s++;
	}
	return (0);
}

char		is_precision(char c)
{
	char	*s;

	s = "*.";
	while (*s)
	{
		if (c == *s)
			return (c);
		s++;
	}
	return (0);
}

int			is_valid(char c)
{
	if (is_modifier(c) || is_flag(c) || is_digit(c)
	|| is_precision(c))
		return (1);
	return (0);
}
