/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:58:17 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:58:42 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memcpy(void *s1, const void *s2, size_t n)
{
	size_t 	index;
	char 	*p1;
	char 	*p2;

	index = 0;
	p1 = s1;
	p2 = (void*)s2;
	while (index < n)
	{
		p1[index] = p2[index];
		index++;
	}
	return (s1);
}
