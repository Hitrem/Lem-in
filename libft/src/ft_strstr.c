/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:48:39 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 16:00:14 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strstr(const char *s1, const char *s2)
{
	size_t 	count;
	int 	len;
	int 	index;

	count = 0;
	len = 0;
	index = 0;
	if (!*s2)
		return ((char*)s1);
	while (s1[index] != '\0')
	{
		len = 0;
		while (s1[index + len] == s2[len] && s2[len])
			len++;
		if (s2[len] == '\0')
			return ((char*)s1 + index);
		index++;
	}
	return (NULL);
}
