/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnew.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:05:47 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 16:00:03 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnew(size_t size)
{
	char 		*str;
	size_t 		index;

	index = 0;
	str = (char*)ft_memalloc(size);
	if (str == NULL)
		return (NULL);
	while (index <= size)
	{
		str[index] = '\0';
		index++;
	}
	return (str);
}
