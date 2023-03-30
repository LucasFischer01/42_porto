#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	aux;

	aux = 1;
	if (nb < 0)
		return (0);
	if (nb >= 46341)
		return (0);
	
	while ( (aux * aux) != nb)
	{
		aux++;
	}
	if ((aux * aux) == nb)
		return (aux);
}
/*
int	main(void)
{
	printf("a raiz quadrada de 4 é: %d", ft_sqrt(4));
}*/
