/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_striteri.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:16:17 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:59:40 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_striteri(char *s, void(*f)(unsigned int, char *))
{
	unsigned int index;

	index = 0;
	while (s[index] != '\0')
	{
		f(index, s + index);
		index++;
	}
}
