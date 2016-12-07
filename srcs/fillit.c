/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 05:02:46 by tiskow            #+#    #+#             */
/*   Updated: 2016/12/07 01:07:41 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		main(int ac, char **ag)
{
	int fd;
	int ret;
	char tmp[1024];
	f_list *tetriminos;
	
	if (ac != 2)
		return(ft_usage());
	else	
	{
		fd = open(ag[1], O_RDONLY);
		if (fd != -1)
		{
			ret = read(fd, tmp, 1023);
			close(fd);
			tetriminos = ft_newlist(tmp, ft_parsefile(tmp, 4, 5, 0));
			if (!tetriminos)
				return (ft_error());
			ft_displaylist(tetriminos);
			
		}
		else
			return (ft_usage());
	}
	return (0);
}