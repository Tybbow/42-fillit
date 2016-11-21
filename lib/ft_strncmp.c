/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/10 02:02:47 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/21 04:58:02 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

int		ft_strncmp(const char *str1, const char *str2, size_t n)
{
	return (ft_memcmp(str1, str2, ft_min(n, ft_strlen(str2) + 1)));
}
