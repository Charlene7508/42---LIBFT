#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t	i;

	if (n == 0)
		return (0);
	i = 0;
	while (i < n - 1 && str1[i] != '\0' && str2[i] != '\0')
	{
		if (str1[i] != str2[i])
			return ((unsigned char)str1[i] - (unsigned char)str2[i]);
		i++;
	}
	return ((unsigned char)str1[i] - (unsigned char)str2[i]);
}

/*
#include <stdio.h>
int	main(void)
{
	char str_1[] = "Bonjour";
    int result_cmp;

    printf("Cas : strings identiques\n");
    result_cmp = ft_strncmp(str_1, "Bonjour", 8);
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", result_cmp);

    printf("Cas : premier < second\n");
    result_cmp = ft_strncmp(str_1, "Bonsoir", 8);
    printf("Attendu : negatif\n");
    printf("Obtenu  : %d\n", result_cmp);

    printf("Cas : premier > second\n");
    result_cmp = ft_strncmp(str_1, "Aurevoir", 9);
    printf("Attendu : positif\n");
    printf("Obtenu  : %d\n", result_cmp);

    printf("Cas : n = 0\n");
    result_cmp = ft_strncmp(str_1, "Bonjour", 0);
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", result_cmp);

   	return(0);
}*/