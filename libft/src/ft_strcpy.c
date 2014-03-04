/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:25:24 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:59:32 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strcpy(char *s1, const char *s2)
{
	int count;

	count = 0;
	while (s2[count])
	{
		s1[count] = s2[count];
		count++;
	}
	s1[count] = '\0';
	return (s1);
}
