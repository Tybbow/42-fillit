/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   fillit.h                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tiskow <tiskow@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/11/21 05:10:17 by tiskow            #+#    #+#             */
/*   Updated: 2016/12/05 02:05:56 by tiskow           ###   ########.fr       */
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
int				ft_usage();
int				ft_error();
char			*ft_strdelchar(char *str, char replace);
t_list			*ft_newlist(char *file, size_t len);
size_t			ft_parsefile(char *file, size_t len, size_t wid, size_t n);
int				ft_invstrchr(char *str, char c1, char c2);
char			*ft_bddalgo(char *str);
#endif