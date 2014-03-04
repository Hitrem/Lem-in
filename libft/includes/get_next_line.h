/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 22:51:43 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/07 18:38:16 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# include "libft.h"
# include <sys/types.h>
# include <sys/stat.h>
# include <fcntl.h>

# define BUFF_SIZE_GNL 30

int			get_next_line(int const fd, char **line);
char		*ft_save(char *characters, char **keep);
int			ft_joinsave(char **fullline, char **keep);
int			ft_loop(int const fd, char **line, char **fullline, char **keep);

#endif /* !GET_NEXT_LINE_H */
