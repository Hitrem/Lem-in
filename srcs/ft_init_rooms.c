/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_init_rooms.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 21:13:52 by raudiber          #+#    #+#             */
/*   Updated: 2014/03/04 19:48:59 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

t_room 		*ft_new_room(char **infos, int start, int end)
{
	t_room 	*room;

	room = malloc(sizeof(t_room));
	if (room)
	{
		room->name = infos[0];
		room->start = start;
		room->end = end;
		room->x = ft_atoi(infos[1]);
		room->y = ft_atoi(infos[2]);
		room->next = NULL;
		return (room);
	}
	else
		return (NULL);

}

void 		ft_add_next_room(t_room **rooms, t_room *room)
{
	t_room 	*tmp;

	tmp = *rooms;
	while (tmp->next)
		tmp = tmp->next;
	tmp->next = room;
}

void 		ft_add_room(t_room **rooms, char **infos, int sig)
{
	if (infos[0][1] == 'L')
		ft_lem_errors(2);
	if (*rooms == NULL)
	{
		if (sig == 1)
			*rooms = ft_new_room(infos, 1, 0);
		else if (sig == 2)
			*rooms = ft_new_room(infos, 0, 1);
		else if (sig == 0)
			*rooms = ft_new_room(infos, 0, 0);
	}
	else
	{
		if (sig == 1)
			ft_add_next_room(rooms, ft_new_room(infos, 1, 0));
		else if (sig == 2)
			ft_add_next_room(rooms, ft_new_room(infos, 0, 1));
		else if (sig == 0)
			ft_add_next_room(rooms, ft_new_room(infos, 0, 0));
	}
}

void		ft_set_ants(t_room **head, int ants)
{
	t_room	*tmp;

	tmp = *head;
	while (tmp->start != 1 && tmp->next)
		tmp = tmp->next;
	if (tmp->start == 1)
		tmp->ants = ants;
	else
		ft_lem_errors(1);
}