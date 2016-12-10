/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/12/08 05:59:03 by tiskow            #+#    #+#             */
/*   Updated: 2016/12/10 10:06:42 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int		ft_msqrt(int n)
{
	int a;

	a = 1;
	while (a * a <= n)
		a++;
	return (a);
}