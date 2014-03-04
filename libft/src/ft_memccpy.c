/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 17:12:17 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:58:16 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void *ft_memccpy(void *s1, const void *s2, int c, size_t n)
{
	size_t 	index;
	char 	*p1;
	char 	*p2;

	p1 = s1;
	p2 = (char*)s2;
	index = 0;
	while (p2[index] && index < n)
	{
		if (p2[index] == (unsigned char)c)
		{
			p1[index] = p2[index];
			index++;
			return ((char*)p1 + index);
		}
		p1[index] = p2[index];
		index++;
	}
	return (NULL);
}
