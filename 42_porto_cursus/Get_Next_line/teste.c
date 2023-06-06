#include "get_next_line.h"

/*copia stash ate  \n, aloca o resto em tmp,  limpa o stash, volta o que 
at'e '\0' para o stash, limpa o tmp e retorna line*/
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
        *tmp++ = stash[j];
    tmp = '\0';
    free (stash);
    stash = tmp;
    free(tmp);
    return (line);
  
}
/* A funcao stash_storage aloca a memoria para o stash, considerando o size
atual + buffer, limpa o buffer, pecorre o stash buscando \n, se tiver chama ft_newline,
se nao chama read de novo*/
char    stash_storage (int bytes_read, char *stash, char *buffer, int i)
{
    char    *line;
    int     len;
    int     i;

    stash = ft_calloc(ft_strlen(stash, '\0') + bytes_read + 1, sizeof(char));
    if (!stash)
        return (NULL);
    stash = ft_strjoin(stash, buffer);
    free(buffer);
    len = ft_strlen(stash, '\0');
    while (i++ <= len)
    {
        if (stash[i] == '\n')
            return (ft_newline(stash, line));
    }
    if (stash[i] == '\0')
        ft_read();
}


