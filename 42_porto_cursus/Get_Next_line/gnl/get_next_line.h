/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:22:32 by llopes-f          #+#    #+#             */
/*   Updated: 2023/06/11 04:52:49 by llopes-f         ###   ########.fr       */
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

//			Structs				//
typedef	struct	s_line
{
	char		*buffer;
	char		*line;
	size_t		i;
	int			fd;
}		t_line;	

//			Buffer				//
# ifndef BUFFER_SIZE
#	define BUFFER_SIZE 42
#endif

//			Functions			//

size_t	ft_strlen(const char *str, char c);
void	*ft_calloc(size_t numb, size_t size);
void	ft_bzero(void *s, size_t n);
void	*ft_memcpy(void *dest, const void *src, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
char	*ft_newline(char *stash, t_line *st);
char	*stash_storage(char *stash, t_line *st);
char	*ft_read(t_line *st, char *stash);
char *get_next_line(int fd);

#endif