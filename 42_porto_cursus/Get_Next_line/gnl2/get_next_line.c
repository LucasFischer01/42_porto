/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 02:24:31 by llopes-f          #+#    #+#             */
/*   Updated: 2023/06/12 19:26:30 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_newline(t_line *st, char *stash)
{
	size_t	j;
	size_t	i;

	i = 0 ;
	j = ft_strlen(stash, '\n');
	st->line = ft_calloc(j + 1, sizeof(char));
	ft_memcpy(st->line, stash, j);

}


char	*ft_read(t_line *st, char stash)
{
	int	bytes_read;

	bytes_read = read(st->fd, st->buffer, BUFFER_SIZE);
	if (bytes_read < 0)
		return (NULL);
	st->line = stash_storage( &st, stash);
	return (st->line);
}

void ft_init (t_line *st)
{
	st->i = 0;
	st->line = NULL;
	st->buffer = NULL;
}

char	*get_next_line(int fd)
{
	t_line	st;
	char	*line;
	static char	*stash[BUFFER_SIZE+1];
	
	st.fd = fd;
	ft_init(&st);
	if (fd < 0 || BUFFER_SIZE <= 0 || !stash)
		return (NULL);
	ft_read(&st, stash);
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
    close(fd);
    return (0);
}