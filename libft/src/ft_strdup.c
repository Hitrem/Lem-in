/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/19 12:25:12 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:59:35 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char *ft_strdup(const char *s1)
{
	char *cpy;

	cpy = (char*)malloc((sizeof(char) * ft_strlen(s1)) + 1);
	if (cpy)
	{
		ft_strcpy(cpy, s1);
	}
	return (cpy);
}
