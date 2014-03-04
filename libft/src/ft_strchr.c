/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:35:12 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:59:27 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strchr(const char *s, int c)
{
	int count;

	count = 0;
	while (s[count] != '\0')
	{
		if (s[count] == c)
			return ((char*)s + count);
		count++;
	}
	if ((char)c == '\0')
		return ((char*)s + (count));
	else
		return (NULL);
}

