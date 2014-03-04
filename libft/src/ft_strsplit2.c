/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strsplit2.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/03 15:48:56 by raudiber          #+#    #+#             */
/*   Updated: 2014/02/03 16:19:08 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

static size_t 	ft_strsplitsize(char const *s, char c1, char c2)
{
	size_t	index;
	size_t 	nb;

	index = 0;
	nb = 0;
	while (s[index])
	{
		if ((s[index] != c1 && s[index + 1] == c1) || (s[index] != c2
			&& s[index + 1] == c2))
			nb++;
		else if (s[index] != c1 && s[index] != c2 && nb == 0)
			nb++;
		index++;
	}
	return (nb + 1);
}

char  			**ft_strsplit2(char const *s, char c1, char c2)
{
	char	**tab;
	size_t	index;
	size_t	len;
	size_t 	nb;

	tab = (char**)malloc(sizeof(char*) * ft_strsplitsize(s, c1, c2));
	if (!tab)
		return (0);
	index = 0;
	nb = 0;
	while (s[index] != '\0')
	{
		if (s[index] != c1 && s[index] != c2)
		{
			len = 0;
			while (s[index + len] != c1 && s[index + len] != c2
					&& s[index + len] != '\0')
				len++;
			tab[nb++] = ft_strsub(s, index, len);
			if (s[index + len] != '\0')
				index += len;
			else
				index += (len - 1);
		}
		index++;
	}
	tab[nb] = '\0';
	return (tab);
}
