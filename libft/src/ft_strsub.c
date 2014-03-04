/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsub.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:02:34 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 16:00:16 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strsub(char const *s, unsigned int start, size_t len)
{
	char 			*new;
	unsigned int 	count;

	count = 0;
	new = (char*)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	while (count < len)
	{
		new[count] = s[start];
		count++;
		start++;
	}
	new[count] = '\0';
	return (new);
}

