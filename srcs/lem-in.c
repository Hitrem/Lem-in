/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lem-in.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 20:25:01 by raudiber          #+#    #+#             */
/*   Updated: 2014/03/04 19:49:31 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

char 		**ft_split_infos_room(char *line)
{
	char 	**infos;

	infos = ft_strsplit(line, ' ');
	return (infos);
}

char 		**ft_split_infos_node(char *line)
{
	char **infos;

	infos = ft_strsplit(line, '-');
	return (infos);
}

void		ft_print_rooms(t_room **rooms)
{
	t_room 	*tmp;

	tmp = *rooms;
	while (tmp)
	{
		ft_putstr(tmp->name);
		ft_putchar(' ');
		ft_putnbr(tmp->x);
		ft_putchar(' ');
		ft_putnbr(tmp->y);
		ft_putchar(' ');
		ft_putnbendl(tmp->ants);	
		tmp = tmp->next;
	}
}

int 	ft_catch_comment(char *line)
{
	if (!ft_strncmp(line, "##start", 7))
		return (1);
	else if (!ft_strncmp(line, "##end", 5))
		return (2);
	else
		return (-1);
}

int 	ft_verif_number(char *line)
{
	int count;

	count = 0;
	while (ft_isdigit(line[count++]));
	ft_putchar(line[count]);
	if (line[count] == '\0')
		return (ft_atoi(line));
	else
		ft_lem_errors(3);
}

int main(void)
{
	t_room	*rooms;
	char	*line;
	int 	ants;
	int		sig;

	rooms = NULL;
	ants = 0;
	sig = 0;
	while (get_next_line(0, &line))
	{
		if (*line == '\0')
			break;
		if (!ants)
			ants = ft_verif_number(line);
		else if (ants > 0)
		{
			if (line[0] == '#')
			{
				if (!ft_strncmp(line, "##", 1))
					sig = ft_catch_comment(line);
				else
					sig = -1;
			}
			else if (sig >= 0)
			{
				ft_add_room(&rooms, ft_split_infos_room(line), sig);
				sig = 0;
			}
			else if (sig == -1)
				sig = 0;
		}
	}
	ft_set_ants(&rooms, ants);
	if (rooms != NULL)
		ft_print_rooms(&rooms);
	return (0);
}
