/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bddalgo.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/29 13:18:54 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/30 06:46:28 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

char	ft_bddalgo(char *str)
{
	int i;
	int n;

	n = 1;
	i = 1;
	ft_putstr(str);
	ft_putchar(10);
	while (str[i])
	{
		if (str[i] == '#')
		{
			ft_putnbr(i);
			ft_putstr(" : ");
			ft_putnbr(n);
			ft_putchar(10);
			n = 0;
		}
		n++;
		i++;
	}
	return (1);
}
