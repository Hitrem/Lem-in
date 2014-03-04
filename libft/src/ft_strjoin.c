/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:02:41 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:59:42 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strjoin(char const *s1, char const *s2)
{
	size_t 	len;
	size_t 	index1;
	size_t 	index2;
	char 	*new;

	index1 = 0;
	index2 = 0;
	len = (ft_strlen(s1) + ft_strlen(s2));
	new = ft_strnew(len + 1);
	while (s1[index1] != '\0')
	{
		new[index1] = s1[index1];
		index1++;
	}
	while (s2[index2] != '\0')
	{
		new[index1 + index2] = s2[index2];
		index2++;
	}
	new[index1 + index2] = '\0';
	return (new);
}
