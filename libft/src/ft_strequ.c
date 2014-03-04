/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strequ.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:02:07 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:59:37 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strequ(char const *s1, char const *s2)
{
	size_t index;

	index = 0;
	while (s1[index] != '\0')
	{
		if (s1[index] != s2[index])
			return (0);
		index++;
	}
	return (1);
}
