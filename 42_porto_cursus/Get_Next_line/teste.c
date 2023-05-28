#include "get_next_line.h"
#include <unistd.h> // Inclua a biblioteca unistd.h para usar a função read
#include <stdlib.h> // Inclua a biblioteca stdlib.h para usar a função malloc e free

char *new_line(char *stash, char *buffer, int bytes_read, int i)
{
    char *temp;
    char *line;
    int j;

    j = 0;
    stash = ft_calloc((ft_strlen(stash) + bytes_read + 1), sizeof(char));
    stash = ft_strjoin(stash, buffer);

    while (stash[i] != '\n' && stash[i] != '\0')
        i++;

    if (stash[i] == '\n')
    {
        line = ft_calloc(i + 1, sizeof(char));
        ft_memcpy(line, stash, i);
        temp = ft_calloc(ft_strlen(stash) - i + 1, sizeof(char));
        while (stash[i] != '\0')
            temp[j++] = stash[i++];
        temp[j] = '\0';
        free(stash);
        stash = temp;
        free(temp);
        i = 0;
        return line;
    }
    else
    {
        line = ft_calloc(i + 1, sizeof(char));
        ft_memcpy(line, stash, i);
        i = 0;
        return line;
    }
}

int buffer_read()
{
    return BUFFER_SIZE;
}

char *ft_read(int fd, char *buffer, char *stash, int i)
{
    int bytes_read;
    char *line;

    bytes_read = read(fd, buffer, BUFFER_SIZE);
    if (bytes_read < 0 || fd < 0)
        return NULL;

    while (bytes_read > 0)
    {
        line = new_line(stash, buffer, bytes_read, i);
        if (line != NULL)
            return line;
    }

    line = new_line(stash, buffer, bytes_read, i);
    return line;
}

char *get_next_line(int fd)
{
    static char *stash;
    char *buffer;
    static int i;

    i = 0;
    if (fd < 0 || BUFFER_SIZE <= 0)
        return NULL;

    buffer = ft_calloc(BUFFER_SIZE + 1, sizeof(char));
    if (!buffer)
        return NULL;

    return ft_read(fd, buffer, stash, i);
}
