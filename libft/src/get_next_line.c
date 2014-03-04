/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2013/12/03 22:51:37 by raudiber          #+#    #+#             */
/*   Updated: 2014/01/03 15:57:04 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/get_next_line.h"

char	*ft_save(char *characters, char **keep)
{
	char		*rest;
	int			index;
	int			len;

	len = 0;
	index = 0;
	while (characters[index] != '\n')
		index++;
	if (index == 0)
	{
		rest = "";
		len = (ft_strlen(characters) - (index + 1));
		*keep = ft_strsub(characters, (index + 1), len);
	}
	else
	{
		rest = ft_strsub(characters, 0, index);
		len = (ft_strlen(characters) - (index + 1));
		*keep = ft_strsub(characters, (index + 1), len);
	}
	return (rest);
}

int		ft_joinsave(char **fullline, char **keep)
{
	if (ft_strchr(*keep, '\n'))
	{
		*fullline = ft_strjoin(*fullline, ft_save(*keep, keep));
		return (1);
	}
	else
	{
		*fullline = ft_strjoin(*fullline, *keep);
		ft_strdel(keep);
		return (0);
	}
}

int		ft_loop(int const fd, char **line, char **fullline, char **keep)
{
	char		*characters;
	int			ret;

	ret = 1;
	while (ret > 0)
	{
		characters = ft_strnew(BUFF_SIZE_GNL + 1);
		ret = read(fd, characters, BUFF_SIZE_GNL);
		if (ft_strchr(characters, '\n'))
		{
			*fullline = ft_strjoin(*fullline, ft_save(characters, keep));
			*line = *fullline;
			return (ret);
		}
		else
			*fullline = ft_strjoin(*fullline, characters);
	}
	return (ret);
}

int		get_next_line(int const fd, char **line)
{
	static char *keep;
	char		*fullline;
	int			result;

	fullline = ft_strnew(0);
	if (keep != NULL)
	{
		if (ft_joinsave(&fullline, &keep))
		{
			*line = fullline;
			return (1);
		}
	}
	result = ft_loop(fd, line, &fullline, &keep);
	if (result > 0)
		return (1);
	else if (result < 0)
		return (-1);
	else
		return (0);
}
