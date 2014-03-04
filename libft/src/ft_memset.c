/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memset.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 16:04:48 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:58:57 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memset(void *b, int c, size_t len)
{
	size_t 	index;
	char 	*p;

	index = 0;
	p = (char*)b;
	while (len--)
	{
		p[index] = (char)c;
		index++;
	}
	return (b);
}
