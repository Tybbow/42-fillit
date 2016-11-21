/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 06:27:53 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/21 04:57:52 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strtrim(char const *str)
{
	int		st;
	int		end;

	if (!str)
		return (NULL);
	st = 0;
	end = ft_strlen((char *)str) - 1;
	while (str[st] == ' ' || str[st] == '\n' || str[st] == '\t')
		st++;
	while (str[end] == ' ' || str[end] == '\n' || str[end] == '\t')
		end--;
	return ((end <= st) ? ft_strnew(0) : ft_strsub(str, st, end - st + 1));
}
