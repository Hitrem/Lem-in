/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/23 16:02:49 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 16:00:17 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strtrim(char const *s)
{
	unsigned int 	start;
	size_t 			len;
	unsigned int 	i;

	start = 0;
	len = 0;
	while (s[start] == ' ' || s[start] == '\n' || s[start] == '\t')
		start++;
	if (s[start] == '\0')
		return (NULL);
	while (s[start + len] != '\0')
		len++;
	i = start + (len - 1);
	while (s[i] == ' ' || s[i] == '\n' || s[i] == '\t' || i == 0)
	{
		i--;
		len--;
	}
	return (ft_strsub(s, start, len));
}
