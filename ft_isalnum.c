#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
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
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", ft_isalpha(' '));
    
    printf("Cas : chiffre\n");
    printf("Attendu : 1\n");
    printf("Obtenu  : %d\n", ft_isalpha('2'));
    
	return(0);
}*/