/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_newlist.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 11:32:35 by tiskow            #+#    #+#             */
/*   Updated: 2016/12/02 00:21:47 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

size_t	ft_countchar(char *str)
{
	int		count;
	int		i;

	i = 0;
	count = 0;
	while (str[i++])
	{
		if (str[i] == '#')
			count++;
	}
	return (count);
}

int	ft_findtetriminos(char *str)
{
	int n;

	n = 0;
	n = (str[0] == 1 && str[1] == 1 && str[2] == 1) ? 1 : 0;
	n = (n || (str[0] == 1 && str[1] == 1 && str[2] == 2)) ? 1 : 0;
	n = (n || (str[0] == 1 && str[1] == 1 && str[2] == 3)) ? 1 : 0;
	n = (n || (str[0] == 1 && str[1] == 1 && str[2] == 4)) ? 1 : 0;
	n = (n || (str[0] == 1 && str[1] == 2 && str[2] == 1)) ? 1 : 0;
	n = (n || (str[0] == 1 && str[1] == 3 && str[2] == 1)) ? 1 : 0;
	n = (n || (str[0] == 1 && str[1] == 3 && str[2] == 4)) ? 1 : 0;
	n = (n || (str[0] == 1 && str[1] == 4 && str[2] == 1)) ? 1 : 0;
	n = (n || (str[0] == 1 && str[1] == 4 && str[2] == 4)) ? 1 : 0;
	n = (n || (str[0] == 2 && str[1] == 1 && str[2] == 1)) ? 1 : 0;
	n = (n || (str[0] == 3 && str[1] == 1 && str[2] == 1)) ? 1 : 0;
	n = (n || (str[0] == 3 && str[1] == 1 && str[2] == 3)) ? 1 : 0;
	n = (n || (str[0] == 3 && str[1] == 1 && str[2] == 4)) ? 1 : 0;
	n = (n || (str[0] == 4 && str[1] == 1 && str[2] == 1)) ? 1 : 0;
	n = (n || (str[0] == 4 && str[1] == 1 && str[2] == 3)) ? 1 : 0;
	n = (n || (str[0] == 4 && str[1] == 1 && str[2] == 4)) ? 1 : 0;
	n = (n || (str[0] == 4 && str[1] == 3 && str[2] == 1)) ? 1 : 0;
	n = (n || (str[0] == 4 && str[1] == 4 && str[2] == 1)) ? 1 : 0;
	n = (n || (str[0] == 4 && str[1] == 4 && str[2] == 4)) ? 1 : 0;
	return (n);
}

char		*ft_bddalgo(char *str)
{
	int 	i;
	int 	n;
	int 	count;
	char	tmp[3];
	char	*ptr;
	
	n = 0;
	i = 0;
	count = 0;
	if (ft_countchar(str) != 3)
		return (NULL);
	while (str[i++] && ++n)
	{
		if (str[i] == '#')
			tmp[count] = n;
		count = (str[i] == '#') ? count + 1 : count;
		n = (str[i] == '#') ? 0 : n;
	}
	ptr = tmp;
	ft_putstr(str);
	ft_putchar(10);
	if (ft_findtetriminos(tmp))
		return (ptr);
	return (NULL);
}

t_list		*ft_newlist(char *file, size_t len)
{
	t_list 	*newlist;
	char	**darray;
	char	tmp[16];
	int		i;

	i = 0;
	darray = ft_strsplit(file, '\n');
	ft_strclr(tmp);	
	newlist = NULL;
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
	return (newlist);
}
