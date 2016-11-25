/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_check.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 07:33:27 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/25 02:03:53 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		ft_cline(char *str)
{
	int i;
	int count;

	i = 0;
	count = 0;
	if (!ft_invstrchr(str, '#', '.'))
		return (0);
	while (str[i])
	{
		if (ft_strclen(&str[i], '\n') == 4)
			count++;
		i = i + 5;
	}
	if (count == 4)
		return (1);
	return (0);

}

/*f_list		*ft_pushback(char *str, char *orientation)
{
	f_list *list;

	while (list->next)
		list = list->next;
	list->content = str;
	list->methode = orientation;
	return (list);
}*/

/*f_list		*ft_addtetriminos(char *str)
{
	f_list	*list;
	char	*tmp;
	
	
	return (list);
}*/

char		*ft_findtetriminos(char *str)
{
	//char	tmp[3];
	char	*mstr;
	int		i;

	i = 0;
	mstr = ft_strdup(str);
	mstr = ft_strdelchar(mstr, '\n');
	return (mstr);
}

char		*ft_check(char *str)
{
	//f_list	*fillit;
	char 	*tmp;
	int 	i;
	
	//fillit = NULL;
	i = 0;
	while (str[i])
	{
		tmp = ft_strsub(str, i, 20);
		if (ft_cline(tmp))
		{
			if (ft_findtetriminos(tmp))
				ft_putstr("ok\n");
			i = i + 20;
		}
		if (!((str[i++] == '\n') || (str[i] == 0)))
			return (0);
	}
	return (tmp);
}
