/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   lemin.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/02/12 20:24:16 by raudiber          #+#    #+#             */
/*   Updated: 2014/03/04 19:48:41 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LEMIN_H
# define LEMIN_H

# include <libft.h>

typedef struct 		s_room
{
	char 			*name;
	int 			start;
	int 			end;
	int				x;
	int				y;
	int 			ants;
	struct s_room 	*next;
}					t_room;

typedef struct  	s_node
{
	struct s_room 	room;
	struct t_node	*next;
}					t_node;

void 		ft_add_next_room(t_room **rooms, t_room *room);
void 		ft_add_room(t_room **rooms, char **infos, int sig);
t_room 		*ft_new_room(char **infos, int start, int end);
void		ft_set_ants(t_room **head, int ants);

char 		**ft_split_infos_room(char *line);
char 		**ft_split_infos_node(char *line);
void		ft_print_rooms(t_room **rooms);

int 		ft_catch_comment(char *line);

int 		ft_verif_number(char *line);

void		ft_lem_errors(int error);

#endif /* !LEMIN_H */
