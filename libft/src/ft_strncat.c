/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:50:54 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:59:56 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	size_t index1;
	size_t index2;

	index1 = 0;
	index2 = 0;
	while (s1[index1] != '\0')
		index1++;
	while ((s2[index2] != '\0') && (index2 < n))
	{
		s1[index1] = (char)s2[index2];
		index2++;
		index1++;
	}
	s1[index1] = '\0';
	return (s1);
}
