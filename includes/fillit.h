/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 05:10:17 by tiskow            #+#    #+#             */
/*   Updated: 2016/11/23 08:39:41 by tiskow           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FILLIT_H
# define FILLIT_H
# include <fcntl.h>
# include "libft.h"

struct			f_list
{
	char				*content;
	char				*methode;
	struct f_list		*next;
};
typedef struct f_list	f_list;
void			ft_usage();
void			ft_error();
char			*ft_strdelchar(char *str, char replace);
char			*ft_check(char *str);
char			*ft_findtetriminos(char *str);
int				ft_invstrchr(char *str, char c1, char c2);
#endif