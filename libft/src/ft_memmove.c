/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:21:37 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:58:46 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	*ft_memmove(void *s1, const void *s2, size_t n)
{
	size_t 		index;
	char 		*p1;
	const char 	*p2;
	char 		*tmp;

	p1 = s1;
	p2 = s2;
	tmp = (char*)malloc(sizeof(char) * (n + 1));
	index = 0;
	while (index < n && p2[index])
	{
		tmp[index] = p2[index];
		index++;
	}
	index = 0;
	while (tmp[index])
	{
		p1[index] = tmp[index];
		index++;
	}
	free(tmp);
	return (s1);
}
