
#include "get_next_line.h"

/*copia stash ate  \n, aloca o resto em tmp,  limpa o stash, volta o que 
at'e '\0' para o stash, limpa o tmp e retorna line*/
char    *ft_newline (char **stash)
{
    int     j;
    int     i;
    char    *line;
    char    *tmp;

    i = 0;
    j = ft_strlen(*stash, '\n') + 1;
    line = ft_calloc(j, sizeof(char));
    ft_memcpy(line, stash, j);
    tmp = ft_calloc(ft_strlen(*stash, '\0') - j, sizeof(char));
    if (!tmp)
        return (NULL);
    while (*stash[j] != '\0')
        tmp[i++] = *stash[j++];
	tmp[i] = '\0';
    free(stash);
	stash = ft_calloc(ft_strlen(tmp, '\0') + 1, sizeof(char));
    ft_memcpy(stash, tmp, ft_strlen(tmp, '\0'));
    free(tmp);
	tmp = NULL;
    return(line);  
}
/* A funcao stash_storage aloca a memoria para o stash, considerando o size
atual + buffer, limpa o buffer, pecorre o stash buscando \n, se tiver chama ft_newline,
se nao chama read de novo*/
char    *stash_storage(char **stash, char *buffer, int i, int fd)
{
    int     len;


    *stash = ft_strjoin(*stash, buffer);
    free(buffer);
    len = ft_strlen(*stash, '\0');
	printf("len :%d\n", len);
    while (i <= len)
    {
        if (stash[i] == '\n')
           return (ft_newline(**stash));
		i++;
    }
	printf("stash :%s\n", *stash);
    if (stash[i] == '\0')
        ft_read(fd, buffer, *stash, i);
    return (NULL);
}

void    *ft_read (int fd, char *buffer, char *stash, int i)
{
    int     bytes_read;

    bytes_read = read(fd, buffer, BUFFER_SIZE);
    if (bytes_read <= 0 || !buffer)
        return (NULL);
    if (bytes_read <= BUFFER_SIZE && bytes_read != 0)
        stash_storage(*stash, buffer, i, fd);
    return (NULL);
}

char *get_next_line(int fd)
{
    static char **stash;
    char        *buffer;
    int         i;

    i = 0;
	*stash = ft_calloc(1, sizeof(char));
    if (fd < 0 || BUFFER_SIZE <= 0 )
        return (NULL);
    buffer = ft_calloc(BUFFER_SIZE + 1, sizeof (char));
    if (!buffer)
        return (NULL);
    return (ft_read (fd, buffer, *stash, i));
}

int main()
{
    int fd;
    char *line;

    fd = open("teste.txt", O_RDONLY);
    line = get_next_line(fd);
    printf("%s\n", line);
    close(fd);
    return (0);
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
