/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_next_line.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: llopes-f <llopes-f@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/05/05 15:40:49 by llopes-f          #+#    #+#             */
/*   Updated: 2023/05/05 23:12:22 by llopes-f         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include"get_next_line.h"

int	main()
{
	char buf[1000];
	int	fd;

	fd = open("teste.txt", O_RDONLY);
	if (fd == -1)
	{
		printf("Erro ao abrir o arquivo");
		return (1);
	}
	printf("Deu certo!");
	 ssize_t bytes_lidos = read(fd, buf, sizeof(buf));
    if (bytes_lidos == -1) {
        perror("read");
        exit(1);
    }
    printf("Bytes lidos: %ld\n", bytes_lidos);
    printf("Dados lidos: %.*s\n", (int)bytes_lidos, buf);

	//get_next_line(fd);


	close(fd);
	return 0;
}