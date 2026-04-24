#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
    printf("Cas : lettre\n");
    printf("Attendu : 1\n");
    printf("Obtenu  : %d\n", ft_isalpha('B'));
    
	printf("Cas : espace\n");
    printf("Attendu : 1\n");
    printf("Obtenu  : %d\n", ft_isalpha(' '));
    
    printf("Cas : hors ascii\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", ft_isalpha(200));
    
	return(0);
}*/