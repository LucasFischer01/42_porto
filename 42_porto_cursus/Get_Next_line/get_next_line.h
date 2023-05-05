/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.h                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 20:22:32 by llopes-f          #+#    #+#             */
/*   Updated: 2023/05/05 22:29:00 by llopes-f         ###   ########.fr       */
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

//			Functions			//
typedef	struct	s_line
{
	char	line;
	ssize_t	size_line;
	long	index;
	ssize_t	size_buffer;
}	t_line;	

#endif