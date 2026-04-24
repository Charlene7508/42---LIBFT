#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
    
	printf("Cas : tabulation\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", ft_isalpha('\t'));
    
    printf("Cas : chiffre\n");
    printf("Attendu : 1\n");
    printf("Obtenu  : %d\n", ft_isalpha('2'));
    
	return(0);
}*/