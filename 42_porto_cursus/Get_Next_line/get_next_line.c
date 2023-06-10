#include "get_next_line.h"

/*copia stash ate  \n, aloca o resto em tmp,  limpa o stash, volta o que 
at'e '\0' para o stash, limpa o tmp e retorna line*/
char    *ft_newline (char *stash)
{
    int     j;
    int     i;
    char    *line;
    char    *tmp;

    i = 0;
    j = ft_strlen(stash, '\n') + 1;
    line = ft_calloc(j, sizeof(char));
    ft_memcpy(line, stash, j);
    tmp = ft_calloc(ft_strlen(stash, '\0') - j, sizeof(char));
    if (!tmp)
        return (NULL);
    while (stash[j] != '\0')
        tmp[i++] = stash[j++];
    tmp = '\0';
    free (stash);
    stash = tmp;
    free(tmp);
    return(line);  
}
/* A funcao stash_storage aloca a memoria para o stash, considerando o size
atual + buffer, limpa o buffer, pecorre o stash buscando \n, se tiver chama ft_newline,
se nao chama read de novo*/
void    stash_storage (char *stash, char *buffer, int i, int fd)
{
    int     len;

    stash = ft_calloc((ft_strlen(stash, '\0') + BUFFER_SIZE + 1), sizeof(char));
    exit(0);
    if (!stash)
        return ;
    stash = ft_strjoin(stash, buffer);
    len = ft_strlen(stash, '\0');
    while (i++ <= len)
    {
        if (stash[i] == '\n')
            ft_newline(stash);
    }
    if (stash[i] == '\0')
        ft_read(fd, buffer, stash, i);
}

void    *ft_read (int fd, char *buffer, char *stash, int i)
{
    int     bytes_read;

    bytes_read = read(fd, buffer, BUFFER_SIZE);
    if (bytes_read <= 0 || !buffer)
        return (NULL);
    if (bytes_read <= BUFFER_SIZE && bytes_read != 0)
        stash_storage(stash, buffer, i, fd);
    return (NULL);
}

char *get_next_line(int fd)
{
    static char *stash;
    char        *buffer;
    int         i;

    i = 0;
    if (fd < 0 || BUFFER_SIZE <= 0 )
        return (NULL);
    buffer = ft_calloc(BUFFER_SIZE + 1, sizeof (char));
    if (!buffer)
        return (NULL);
    return (ft_read (fd, buffer, stash, i));
}

int main()
{
    int fd;
    char *line;

    fd = open("teste.c", O_RDONLY);
    line = get_next_line(fd);
    printf("%s\n", line);
    close(fd);
    return (0);
}
