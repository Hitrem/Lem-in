/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:40:13 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:59:25 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	int index1;
	int index2;


	index1 = 0;
	index2 = 0;
	while (s1[index1] != '\0')
		index1++;
	while (s2[index2] != '\0')
	{
		s1[index1] = s2[index2];
		index2++;
		index1++;
	}
	s1[index1] = '\0';
	return (s1);
}
