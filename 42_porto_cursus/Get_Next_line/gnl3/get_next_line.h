/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:22:32 by llopes-f          #+#    #+#             */
/*   Updated: 2023/06/26 20:03:08 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

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
char	*get_next_line(int fd);
size_t	ft_strlen(const char *str);
char	*ft_strjoin(char *s1, char *s2);

#endif