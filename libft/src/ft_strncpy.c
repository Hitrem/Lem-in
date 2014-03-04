/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:09:31 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 16:00:00 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strncpy(char *s1, const char *s2, size_t n)
{
	size_t count;

	count = 0;
	while (count < n && s2[count] != '\0')
	{
		s1[count] = s2[count];
		count++;
	}
	while (count < n)
	{
		s1[count] = '\0';
		count++;
	}
	return (s1);
}
