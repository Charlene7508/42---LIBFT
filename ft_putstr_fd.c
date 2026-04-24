#include "libft.h"

void	ft_putstr_fd(char *s, int fd)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
	{
		write(fd, &s[i], 1);
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	printf("Cas : affichage stdout classique\n");
    printf("Attendu : Hello 42\n");
    printf("Obtenu  : ");
    ft_putstr_fd("Hello 42\n", 1);

    printf("Cas : affichage stderr\n");
    printf("Attendu : Erreur 43\n");
    printf("Obtenu  : ");
    ft_putstr_fd("Erreur 43\n", 2);

   	return(0);
}*/