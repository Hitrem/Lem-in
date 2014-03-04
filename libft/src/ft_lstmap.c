/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lstmap.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/11/29 14:59:28 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:58:10 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

t_list	*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem))
{
	t_list *blst;
	t_list *tmp;
	t_list **lstpt;

	blst = NULL;
	while (lst->next != NULL)
	{
		if (blst == NULL)
		{
			tmp = f(ft_lstnew(lst->content, lst->content_size));
			blst = tmp;
		}
		else
		{
			tmp = f(ft_lstnew(lst->content, lst->content_size));
			lstpt = &blst;
			ft_lstaddend(lstpt, tmp);
		}
		lst = lst->next;
	}
	tmp = f(ft_lstnew(lst->content, lst->content_size));
	lstpt = &blst;
	ft_lstaddend(lstpt, tmp);
	return (blst);
}
