#include "get_next_line.h"

char    stash_storage (int fd, char *stash, char *buffer, int i)
{
    char    *line;
    int     len;

    stash = ft_calloc(ft_strlen(stash, '\0') + BUFFER_SIZE + 1, sizeof(char));
    if (!stash)
        return (NULL);
    stash = ft_strjoin(stash, buffer);
    len = ft_strlen(stash, '\0');
    while (i++ < len)
        if (stash[i] == '\n')
            line = ft_newline(stash, i);
            len = 
        else
            free(buffer);
            ft_read(fd, buffer, stash, i);

}


