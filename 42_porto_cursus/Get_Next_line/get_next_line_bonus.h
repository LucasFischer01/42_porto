/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line_bonus.h                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:22:32 by llopes-f          #+#    #+#             */
/*   Updated: 2023/06/27 14:42:43 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_BONUS_H
# define GET_NEXT_LINE_BONUS_H

//	   		Headers				 //

# include <unistd.h>
# include <stdlib.h>
# include <stdio.h>
# include <string.h>
# include <fcntl.h>

//			Buffer				//
# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 42
# endif

//			Functions			//
size_t	ft_strlen(const char *str);
char	*get_next_line(int fd);
char	*ft_strjoin(char *s1, char *s2);
int		ft_cleaning(char *str);

#endif