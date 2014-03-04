/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:02:20 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 16:00:01 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int	ft_strnequ(char const *s1, char const *s2, size_t n)
{
	size_t index;

	index = 0;
	while ((s1[index] != '\0') && (index < n))
	{
		if (s1[index] != s2[index])
			return (0);
		index++;
	}
	return (1);
}
