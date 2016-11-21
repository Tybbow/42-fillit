/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 05:02:46 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/21 07:44:26 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "includes/fillit.h"

int		main(int ac, char **ag)
{
	int fd;
	int ret;
	char tmp[512];
	
	if (ac != 2)
		ft_usage();
	else
	{
		fd = open(ag[1], O_RDONLY);
		if (fd != -1)
		{
			ret = read(fd, tmp, 511);
			close(fd);
			ft_putstr(tmp);
			if (!ft_check(tmp))
				ft_error();
		}
	}
	return (0);
}