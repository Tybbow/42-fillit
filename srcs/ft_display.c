/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 05:11:56 by tiskow            #+#    #+#             */
/*   Updated: 2016/12/07 01:11:15 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/fillit.h"

int		ft_usage()
{
	ft_putstr("usage: fillit source_file\n");
	return (0);
}

int		ft_error()
{
	ft_putstr("error\n");
	return (0);
}

void	ft_displaylist(f_list *tetriminos)
{
	while (tetriminos)
	{
		ft_putstr(tetriminos->content);
		ft_putchar(10);
		ft_putnbr(tetriminos->len);
		ft_putchar(10);
		ft_putnbr(tetriminos->tetriminos[0]);
		ft_putnbr(tetriminos->tetriminos[1]);
		ft_putnbr(tetriminos->tetriminos[2]);
		ft_putchar(10);
		ft_putnbr(tetriminos->len);
		ft_putchar(10);
		tetriminos = tetriminos->next;
	}
}