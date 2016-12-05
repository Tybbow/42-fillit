/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/12 23:31:17 by tiskow            #+#    #+#             */
/*   Updated: 2016/12/05 01:36:35 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "../includes/libft.h"

void	ft_putnbr_fd(int n, int fd)
{
	size_t			intlen;
	unsigned int	nb;
	char			tmp[13];
	size_t			tmplen;
	
	nb = (n < 0) ? -n : n;
	intlen = ft_intlen(nb);
	tmplen = intlen;
	while (nb)
	{
		tmp[intlen--] = (nb % 10 + 48);
		nb = nb / 10;
	}
	tmp[intlen] = (n == 0) ? '0' : '-';
	ft_strclr(&tmp[tmplen] + 1);
	(n > 0) ? ft_putstr_fd(&tmp[1], fd) : ft_putstr_fd(tmp, fd);
}
