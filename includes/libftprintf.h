/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libftprintf.h                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: Elena <Elena@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/12/11 11:01:18 by frenna            #+#    #+#             */
/*   Updated: 2020/01/18 12:11:58 by Elena            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFTPRINTF_H
# define LIBFTPRINTF_H

# include <unistd.h>
# include <stdio.h>
# include <stdint.h>
# include <stdlib.h>
# include <limits.h>
# include <float.h>
# include <stdarg.h>

# define BUFF_SIZE 100000

# define F_INT			1
# define F_UPCASE		32
# define F_SHORT		3
# define F_SCHAR		4
# define F_LONG			5
# define F_LLONG		6
# define F_SIZET		7
# define F_INTMAX		8

# define RED				"\033[31m"
# define GREEN			"\033[32m"
# define YELLOW			"\033[33m"
# define BLUE				"\033[34m"
# define MAGENTA		"\033[35m"
# define CYAN				"\033[36m"
# define EOC				"\033[0m"

typedef	struct	s_print
{
	int			l;
	char		*format;
	char		buff[BUFF_SIZE];
	va_list	lst;
	int			just;
	int			width;
	int			sign;
	int			deli;
	int			hash;
	int			sp;
	int			prec;
	int			dot;
	int			flag;
	int			cap;
	int			pnt;
	char		col;
}				t_print;

typedef int	(*t_func)(t_print*);

int				ft_printf(const char *format, ...);

/*
** Libft functions
*/

char			*ft_strchr(char *str, char c, int i, int j);
void			*ft_memset(void *str, int c, size_t n);
int				ft_atoi(const char *s);
char			*ft_strcpy(char *dest, const char *src);
char			*ft_strncpy(char *dest, const char *src, size_t n);
long double		ft_power(long double n, int p);

/*
** Number conversion
*/

void			ft_itoa_pf(t_print *p, long long nbr);
void			ft_utoa_pf(t_print *p, unsigned long long nbr);
void			ft_itoa_b(t_print *p, unsigned long long nb, int b);
void			ft_ldtoa_pf(t_print *p, long double n);

/*
** Auxiliary functions
*/

void			p_init(t_print *p);
int				fill_width(t_print *p, char *s);
void			est_sign(t_print *p, char *s, int i, int l);
void			make_s(t_print *p, char *s, int l, long long nbr);
void			put_char_pf(t_print *p, int c);
intmax_t	calc_d(t_print *p, long double n, unsigned long *t);

/*
** Check input functions
*/

char			is_converse(char c);
char			is_modifier(char c);
char			is_flag(char c);
char			is_precision(char c);
char			is_digit(char c);
int				is_valid(char c);

/*
** Parse flags
*/
int				prs_flags(t_print *p);
int				prs_width(t_print *p);
int				prs_prec(t_print *p);
void			prs_lenspec(t_print *p);
int				prs_spec(t_print *p);
int				ft_parse(t_print *p);

/*
** Transform arguments
*/
int				trf_int(t_print *p);
int				trf_uint(t_print *p);
int				trf_oct(t_print *p);
int				trf_hex(t_print *p);
int				trf_double(t_print *p);
int				trf_char(t_print *p);
int				trf_str(t_print *p);
int				trf_pointer(t_print *p);
int				trf_perc(t_print *p);

/*
** Save result in a string
*/

void			buffer(t_print *p, char *s, int i);

void			ft_putstr(t_print *p);

#endif
