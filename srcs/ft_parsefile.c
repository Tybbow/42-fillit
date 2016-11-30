/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_parse.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 07:33:27 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/29 10:57:28 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

static size_t		ft_parsechar(char *str)
{
	size_t i;

	i = 0;
	while (str[i])
	{
		if (str[i] != '.' && str[i] != '#')
			return (0);
		i++;
	}
	return (i);
}

size_t		ft_parsefile(char *file, size_t len, size_t wid, size_t n)
{
	char		*tmp;
	size_t		i;
	size_t		bloc;

	i = 0;
	bloc = wid * len;
	tmp = ft_strnew(bloc + 1);
	if (!file || !tmp || len < 1 || wid < 1)
		return (0);
	while (file[i])
	{
		ft_strncpy(tmp, &file[i], bloc);
		if ((n == 0) ? 
			!ft_parsefile(tmp, bloc / wid, 1, 1) : !ft_parsechar(tmp))
			return (0);
		i = i + bloc;
		if (file[i] != '\n' && file[i] != 0)
			return (0);
		i++;
		ft_strclr(tmp);
	}
	free(tmp);
	return (i);
}
