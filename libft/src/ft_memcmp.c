/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:59:55 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:58:38 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	size_t 	index;
	char 	*p1;
	char 	*p2;

	index = 0;
	p1 = (void*)s1;
	p2 = (void*)s2;
	while (index < n)
	{
		if (p1[index] != p2[index])
			return ((unsigned char)p1[index] - (unsigned char)p2[index]);
		index++;
	}
	return (0);
}
