/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:32:35 by tiskow            #+#    #+#             */
/*   Updated: 2016/12/01 06:01:07 by tiskow           ###   ########.fr       */
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
	if (!len)
		return (NULL);
	while (darray[i])
	{
		ft_strcat(tmp, darray[i]);
		i++;
		if (i % len == 0)
		{
			if (!ft_bddalgo(ft_strchr(tmp, '#')))
				return (NULL);
			ft_strclr(tmp);
		}
	}
	return (0);
}

