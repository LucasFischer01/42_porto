/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/06/11 02:24:31 by llopes-f          #+#    #+#             */
/*   Updated: 2023/06/12 18:43:40 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "get_next_line.h"

char	*ft_newline(char *stash, t_line *st)
{
	int		j;
	int		i;
	char	*line;
	char	*tmp;

	i = 0;
	j = ft_strlen(stash, '\n');
	line = ft_calloc(j + 1, sizeof(char));
	ft_memcpy(line, stash, j);
	tmp = ft_calloc(ft_strlen(stash, '\0') - j + 1, sizeof(char));
	while (stash[j] != '\0')
		tmp[i++] = stash[j++];
	tmp[i] = '\0';
	free(stash);
	stash = ft_calloc(ft_strlen(tmp, '\0') + 1, sizeof(char));
	ft_memcpy(stash, tmp, ft_strlen(tmp, '\0'));
	free(tmp);
	return (line);
}

char	*stash_storage(char *stash, t_line *st)
{
	int		len;

	stash = ft_strjoin(stash, st->buffer);
	len = ft_strlen(stash, '\0');
	while (stash[st->i] != '\n' && stash[st->i] != '\0')
		st->i++;
	if (stash[st->i] == '\n')
	{
		st->line = ft_newline(stash, st);
		return (st->line);
	}
	else if (stash[st->i] == '\0')
	{
		ft_read(st, stash);
	}

}

char	*ft_read(t_line *st, char *stash)
{
	int		bytes_read;

	bytes_read = read(st->fd, st->buffer, BUFFER_SIZE);
	if (bytes_read < 0)
		return (NULL);
	st->buffer[bytes_read] = '\0';
	st->line = stash_storage(stash, st);
	return (st->line);

}

void ft_init(t_line *st)
{
	st->i = 0;
	st->line = NULL;
	st->buffer = NULL;
}

char	*get_next_line(int fd)
{
	t_line	st;
	static	char	stash[BUFFER_SIZE + 1];

	st.fd = fd;
	ft_init(&st);
	st.buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
	if (fd < 0 || BUFFER_SIZE <= 0 || !stash || !st.buffer)
		return (NULL);
	ft_read (&st, stash);
	return (st.line);
}

size_t ft_strlen(const char *str, char c)
{
        size_t i;

        i = 0;
        while (str[i])
		{
        	if(str[i] == c)
				return (i);
			i++;
		}
		return (i);
}

void ft_bzero(void *s, size_t n)
{
        unsigned char *str;

        str = (unsigned char *)s;
        while (n--)
                *str++ = 0;
}

void	*ft_calloc(size_t numb, size_t size)
{
        void *dest;
        size_t full_size;

        full_size = size * numb;
        dest = malloc(full_size);
        if (dest == NULL)
                return (NULL);
        ft_bzero(dest, full_size);
        return (dest);
}

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d;
	const unsigned char	*s;

	
	if (!dest && !src)
		return (dest);
	d = dest;
	s = src;
	while (n--)
	{
		*d++ = *s++;
	}
	return (dest);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*dest;
	int		i;
	int		j;

	i = 0;
	j = 0;
	if (!s1 || !s2)
		return (NULL);
	dest = malloc(sizeof (char) * (ft_strlen(s1, '\0') + ft_strlen(s2,'\0')) + 1);
	if (!dest)
		return (NULL);
	while (s1[i])
	{
		dest[i] = s1[i];
		i++;
	}
	while (s2[j])
		dest[i++] = s2[j++];
	dest[i] = '\0';
	return (dest);
}

int main ()
{
	int fd;
	char *line;

	fd = open("test.txt", O_RDONLY);
	if (fd < 0)
		return (0);
	line = get_next_line(fd);
	printf("%s\n", line);
	line = get_next_line(fd);
	printf("%s\n", line);
}
