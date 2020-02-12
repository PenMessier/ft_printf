/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: frenna <frenna@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/04/07 11:37:49 by Elena             #+#    #+#             */
/*   Updated: 2019/12/25 12:07:40 by frenna           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libftprintf.h"

char	*ft_strchr(char *str, char c, int i, int j)
{
	while (i <= j)
	{
		if (str[i] == c)
			return (&str[i]);
		i++;
	}
	return (0);
}
