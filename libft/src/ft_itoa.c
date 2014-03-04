/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/22 14:56:54 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:57:58 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static char *ft_itoaalloc(int n)
{
	char 	*snum;
	size_t 	size;
	int 	sign;

	sign = 1;
	size = 0;
	if (n < 0)
	{
		size++;
		sign *= -1;
	}
	while (n > 9)
	{
		size++;
		n /= 10;
	}
	snum = ft_strnew(size + 1);
	if (sign < 0)
		snum[0] = '-';
	return (snum);
}

static void ft_itoaadd(char *s, int n)
{
	char *tmp;

	if (n < 10)
	{
		tmp = ft_strnew(2);
		tmp[0] = n + '0';
		ft_strcat(s, tmp);
		ft_strdel(&tmp);
	}
	else
	{
		ft_itoaadd(s, n / 10);
		ft_itoaadd(s, n % 10);
	}
}

char *ft_itoa(int n)
{
	char *snum;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	snum = ft_itoaalloc(n);
	if (n > 0)
		ft_itoaadd(snum, n);
	else
		ft_itoaadd(snum, -n);
	return (snum);
}
