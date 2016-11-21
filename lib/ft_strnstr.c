/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 01:51:54 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/21 04:57:57 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

char	*ft_strnstr(const char *str, const char *search, size_t n)
{
	size_t	i;

	i = 0;
	if (!*search)
		return ((char *)str);
	while (str[i] && (i + ft_strlen(search) <= n))
	{
		if (ft_strequ(&str[i], search))
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}
