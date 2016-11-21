/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnequ.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 05:59:52 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/21 04:57:58 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strnequ(const char *str1, const char *str2, size_t n)
{
	if (ft_strncmp(str1, str2, n))
		return (0);
	return (1);
}
