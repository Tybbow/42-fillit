/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_places.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 01:54:16 by tiskow            #+#    #+#             */
/*   Updated: 2016/12/10 10:05:34 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		ft_lentetriminos(f_list *tetriminos)
{
	int i;

	i = 0;
	while (tetriminos)
	{
		i++;
		tetriminos = tetriminos->next;
	}
	return (i * 4);
}

void	ft_places(f_list *tetriminos)
{
	int lentotal;

	lentotal = ft_lentetriminos(tetriminos);
	ft_putnbr(ft_msqrt(lentotal));
}