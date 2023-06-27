/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:40:49 by llopes-f          #+#    #+#             */
/*   Updated: 2023/06/27 14:39:01 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

int	ft_cleaning(char *str)
{
	size_t	i;
	size_t	j;
	int		nl;

	i = 0;
	j = 0;
	nl = 0;
	while (str[i])
	{
		if (nl)
			str[j++] = str[i];
		if (str[i] == '\n')
			nl = 1;
		str[i] = '\0';
		i++;
	}
	return (nl);
}

char	*get_next_line(int fd)
{
	static char	buffer [FOPEN_MAX][BUFFER_SIZE + 1];
	char		*line;

	if (fd < 0 || fd > FOPEN_MAX || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	while (buffer[fd][0] || read(fd, buffer[fd], BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, buffer[fd]);
		if (ft_strlen(buffer[fd]) == 0)
			return (line);
		if (ft_cleaning(buffer[fd]) == 1)
			break ;
		if (read(fd, buffer[fd], 0) < 0)
		{
			free (line);
			return (NULL);
		}	
	}
	return (line);
}
