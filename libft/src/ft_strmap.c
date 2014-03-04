/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 20:19:25 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:59:51 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strmap(char const *s, char (*f)(char))
{
	char *new;
	int index;
	int len;

	index = 0;
	len = ft_strlen(s);
	new = (char*)malloc(sizeof(char) * (len + 1));
	if (new == NULL)
		return (NULL);
	while (index < len)
	{
		new[index] = f(s[index]);
		index++;
	}
	new[index] = '\0';
	return (new);
}
