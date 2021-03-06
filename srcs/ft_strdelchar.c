/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdelchar.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 09:33:13 by tiskow            #+#    #+#             */
/*   Updated: 2016/12/08 05:03:33 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

// More functions of string

#include "../includes/fillit.h"

char	*ft_strdelchar(char *str, char c)
{
	int		st;
	int		end;

	if (!str)
		return (NULL);
	st = 0;
	end = ft_strlen((char *)str) - 1;
	while (str[st] == c)
		st++;
	while (str[end] == c)
		end--;
	return ((end < st) ? ft_strnew(0) : ft_strsub(str, st, end - st + 1));
}
