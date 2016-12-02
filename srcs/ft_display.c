/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 05:11:56 by tiskow            #+#    #+#             */
/*   Updated: 2016/12/01 10:21:44 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

void	ft_usage()
{
	ft_putstr("usage: fillit source_file\n");
}

int		ft_error()
{
	ft_putstr("error\n");
	return (0);
}