#include "get_next_line.h"

char    ft_newline (char *stash,char *line)
{
    int     j;
    char    *tmp;

    j = ft_strlen(stash, '\n') + 1;
    ft_memcpy(line, stash, j);
    tmp = ft_calloc(ft_strlen(stash, '\0') - j, sizeof(char));
    if (!tmp)
        return (NULL);
    while (stash[j] != '\0')
        stash[j] = tmp++;
    tmp = '\0';
    free (stash);
    stash = tmp;
    free(tmp);
    return (line);
  
}

char    stash_storage (int bytes_read, char *stash, char *buffer, int i)
{
    char    *line;
    int     len;
    int     i;

    stash = ft_calloc(ft_strlen(stash, '\0') + bytes_read + 1, sizeof(char));
    if (!stash)
        return (NULL);
    stash = ft_strjoin(stash, buffer);
    len = ft_strlen(stash, '\0');
    while (i++ < len)
        if (stash[i] == '\n')
            line = ft_newline(stash, i);
            return (line);
        else
        {
            free(buffer);
            ft_read();
        }
}


