/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 15:00:21 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:59:58 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int ft_strncmp(const char *s1, const char *s2, size_t n)
{
	size_t index;

	index = 0;
	while (index <= n)
	{
		if (s1[index] != s2[index])
			return (s1[index] - s2[index]);
		else if ((s1[index] == '\0') && (s2[index] == '\0'))
			return (0);
		else if ((s1[index] == '\0') || (s2[index] == '\0'))
			return (s1[index] - s2[index]);
		index++;
	}
	return (0);
}
