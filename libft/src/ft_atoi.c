/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 11:47:57 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:57:33 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_atoi(const char *str)
{
	int num;
	int sign;
	int count;

	num = 0;
	count = 0;
	sign = 1;
	if (!ft_isdigit(str[count]))
	{
		if (str[count] == '-')
			sign = -1;
		else if (str[count] == '+')
			sign = 1;
		count++;
	}
	else if (str[count] == '+')
		count++;
	while (ft_isdigit(str[count]))
	{
		num = (num * 10 + (str[count] - '0'));
		count++;
	}
	return (num * sign);
}
