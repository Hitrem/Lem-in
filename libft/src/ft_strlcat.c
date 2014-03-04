/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 19:57:37 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:59:44 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

size_t ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t index1;
	size_t index2;
	size_t len;

	len = ft_strlen(dst) + 1;
	if (size <= len)
		return (size + ft_strlen(src));
	index1 = 0;
	index2 = 0;
	while (dst[index1] != '\0')
		index1++;
	while ((src[index2] != '\0') && (index1 + index2) < (size - 1))
	{
		dst[index1 + index2] = src[index2];
		index2++;
	}
	dst[index1 + index2] = '\0';
	return (len + ft_strlen(src) - 1);
}
