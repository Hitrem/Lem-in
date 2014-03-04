/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 13:45:09 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:59:30 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int ft_strcmp(const char *s1, const char *s2)
{
	int count;

	count = 0;
	while ((s1[count] == s2[count]) && (s1[count] != '\0'))
	{
		count++;
	}
	return (s1[count] - s2[count]);
}
