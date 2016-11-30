/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdelchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 09:33:13 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/29 05:35:10 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// More functions of string

#include "../includes/fillit.h"

char	*ft_strdelchar(char *str, char replace)
{
	char 	*tmp;
	int 	i;
	int		j;

	i = 0;
	j = 0;
	tmp = ft_strnew(ft_strlen(str));
	if (!tmp)
		return (NULL);
	while (str[i])
	{
		if (str[i] != replace)
		{
			tmp[j] = str[i];
			j++;
		}
		i++;
	}
	ft_strclr(str);
	ft_strcpy(str, tmp);
	free(tmp);
	return (str);
}
