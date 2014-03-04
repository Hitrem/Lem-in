/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_lem_errors.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: raudiber <raudiber@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2014/03/04 19:46:26 by raudiber          #+#    #+#             */
/*   Updated: 2014/03/04 19:49:53 by raudiber         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "lemin.h"

void	ft_lem_errors(int error)
{
	if (error == 1)
		ft_putstr_fd("Error: No valid start.\n", 2);
	else if (error == 2)
		ft_putstr_fd("Error: Room name invalid.\n", 2);
	else if (error == 3)
		ft_putstr_fd("Error: Invalid number of ants.\n", 2);
	exit(0);	
}