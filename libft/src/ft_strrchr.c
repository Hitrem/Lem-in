/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/20 14:43:41 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 16:00:10 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int 	count;
	char 	*tmp;

	count = 0;
	tmp = NULL;
	while (s[count] != '\0')
	{
		if (s[count] == (char)c)
			tmp = (char*)s + count;
		count++;
	}
	if (s[count] == (char)c)
		tmp = (char*)s + count;
	return (tmp);
}

