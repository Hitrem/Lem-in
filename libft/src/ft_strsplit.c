/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/21 14:24:29 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 16:00:12 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t	ft_strsplitsize(char const* s, char c)
{
	size_t	index;
	size_t	nb;

	index = 0;
	nb = 0;
	while (s[index])
	{
		if (s[index] != c && s[index + 1] == c)
			nb++;
		else if (s[index] != c && nb == 0)
			nb++;
		index++;
	}
	return (nb + 1);
}

char **ft_strsplit(char const *s, char c)
{
	char **tab;
	size_t index;
	size_t len;
	size_t nb;

	tab = (char**)malloc(sizeof(char*) * ft_strsplitsize(s, c));
	index = 0;
	nb = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c)
		{
			len = 0;
			while (s[index + len] != c && s[index + len] != '\0')
				len++;
			tab[nb++] = ft_strsub(s, index, len);
			if (s[index + len] != '\0')
				index += len;
			else
				index += (len - 1);
		}
		index++;
	}
	tab[nb] = NULL;
	return (tab);
}
