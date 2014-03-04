/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 16:15:59 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 16:00:07 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *s1, const char *s2, size_t n)
{
	int 	index;
	int 	len;
	size_t 	count;

	index = 0;
	len = 0;
	count = 0;
	if (!*s2)
		return ((char*)s1);
	while (s1[index] && n >= count)
	{
		len = 0;
		while (s1[index + len] == s2[len] && s2[len] && n >= count)
		{
			count++;
			len++;
		}
		if (s2[len] == '\0')
			return ((char*)s1 + index);
		index++;
	}
	return (NULL);
}
