/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstdel.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 14:41:56 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:58:04 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_lstdel(t_list **alst, void (*del)(void *, size_t))
{
	t_list **tmplst;

	while ((*alst)->next != NULL)
	{
		tmplst = alst;
		alst = &(*tmplst)->next;
		ft_lstdelone(tmplst, del);
	}
	ft_lstdelone(alst, del);
}
