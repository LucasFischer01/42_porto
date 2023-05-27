/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:40:49 by llopes-f          #+#    #+#             */
/*   Updated: 2023/05/17 20:32:00 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

ft_read(int fd, char *buffer, char *stash)
{
        int i;
        int j;
        char *line;
        char *temp;

        j = 0;
        i = 0;
        buffer = read(fd, buffer, BUFFER_SIZE);
        if (buffer == -1)
                return (NULL);
        while (buffer[i] != '\n' && buffer[i] != '\0')
                stash[i] = buffer[i++];
        line = (char *)malloc((i + 1) * sizeof(char));
        while (j < i)
                line[j] = stash[j++];
        line[j] = '\0';
        temp = (char *)malloc((ft_strlen(buffer) - i + 1) * sizeof(char));
        j = 0;
        while (buffer[i] != '\0')
                temp[j++] = buffer[i++];
        free(stash);
        stash = temp;
        free(temp);
        return (line);
}

char *get_next_line(int fd)
{
        static char *stash;
        char *buffer;

        buffer = (char *)malloc((BUFFER_SIZE + 1) * sizeof(char));
        if (fd < 0 || BUFFER_SIZE <= 0)
                return (NULL);
}