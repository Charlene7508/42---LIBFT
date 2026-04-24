#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("Cas : string normale\n");
    printf("Attendu : 7\n");
    printf("Obtenu  : %zu\n", ft_strlen("Bonjour"));
    
    printf("Cas : string avec tabulation\n");
    printf("Attendu : 8\n");
    printf("Obtenu  : %zu\n", ft_strlen("Bonjo\tur"));
    
    printf("Cas : string vide\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %zu\n", ft_strlen(""));
    
	return(0);
}*/