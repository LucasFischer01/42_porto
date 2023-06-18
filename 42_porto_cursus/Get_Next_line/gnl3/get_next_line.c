/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/18 01:17:05 by llopes-f          #+#    #+#             */
/*   Updated: 2023/06/18 05:31:32 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"


int	ft_cleaning(char *str)
{
	int	i;
	int	j;
	int	is_nwl;

	i = 0;
	j = 0;
	is_nwl = 0;
	while (str[i])
	{
		if (is_nwl)
			str[j++] = str[i];
		if (str[i] == '\n')
			is_nwl = 1;
		str[i] = '\0';
		i++;
	}
	return (is_nwl);
}

char	*get_next_line(int fd)
{
	char	*line;
	static char	*stash[BUFFER_SIZE + 1];

	if (fd < 0 || BUFFER_SIZE <= 0)
		return (NULL);
	line = NULL;
	while (read(fd, stash, BUFFER_SIZE) > 0)
	{
		line = ft_strjoin(line, *stash);
		if (ft_strlen(*stash) == 0)
			return (line);
		if (ft_cleaning(*stash) == 1)
			break ;
		if (read(fd, stash, 0) < 0)
		{
			free (line);
			return (NULL);
		}
	}
	return (line);
}


int main()
{
    int fd;
    char *line;

    fd = open("teste.txt", O_RDONLY);
	if (fd < 0)
		return (-1);
    line = get_next_line(fd);
    printf("%s\n", line);
	free(line);
	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);
	line = get_next_line(fd);
	printf("%s\n", line);
	free(line);
    close(fd);
    return (0);
}