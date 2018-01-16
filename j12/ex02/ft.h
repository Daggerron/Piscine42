/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft.h                                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: cmalfroy <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/07/21 00:19:57 by cmalfroy          #+#    #+#             */
/*   Updated: 2017/07/21 11:28:06 by cmalfroy         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_H
# define FT_H

void	ft_putchar(char c);
int		ft_atoi(char *str);
int		ft_str_is_numeric(char *str);
void	no_file(char *str);
void	no_arguments(void);
void	illegal_offset(char **argv);
void	ft_putstr(char *str, int nb);

#endif
