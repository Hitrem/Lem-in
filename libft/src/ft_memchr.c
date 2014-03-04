/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 17:56:58 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:58:18 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	size_t 	index;
	char 	*p;

	index = 0;
	p = (void*)s;
	while (index < n)
	{
		if (p[index] == (char)c)
			return (p + index);
		index++;
	}
	return (NULL);
}
