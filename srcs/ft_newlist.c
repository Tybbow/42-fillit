/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:32:35 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/30 06:21:15 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

t_list		*ft_newlist(char *file, size_t len)
{
	t_list 	newlist;
	char	**darray;
	char	tmp[16];
	int		i;

	i = 0;
	darray = ft_strsplit(file, '\n');
	ft_strclr(tmp);	
	newlist.content = NULL;
	while (darray[i])
	{
		ft_strcat(tmp, darray[i]);
		i++;
		if (i % len == 0)
		{
			ft_putchar(10);
			//ft_putstr(tmp);
			if (!ft_bddalgo(ft_strchr(tmp, '#')))
				return (NULL);
			ft_strclr(tmp);
			
		}
		/*ft_putnbr(i % len);
		ft_putstr(" : ");
		ft_putnbr(i);
		ft_putstr(" : ");
		ft_putnbr(len);
		ft_putchar(10);*/
	}
	return (0);
}

