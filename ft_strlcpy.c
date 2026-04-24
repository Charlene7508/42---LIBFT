#include "libft.h"

size_t	ft_strlcpy(char *dst, const char *src, size_t size)
{
	size_t	src_len;
	size_t	i;

	src_len = 0;
	while (src[src_len] != '\0')
		src_len++;
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && i < size - 1)
		{
			dst[i] = src[i];
			i++;
		}
		dst[i] = '\0';
	}
	return (src_len);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("Cas : copie normale\n");
    char src_cpy[10] = "Bonjour!!";
    char dst_cpy[10];
    size_t ret;
    ret = ft_strlcpy(dst_cpy, src_cpy, 10);
    printf("Attendu : Bonjour!! / longueur 9\n");
    printf("Obtenu  : %s / longueur %zu\n", dst_cpy, ret);
    
    printf("Cas : copie tronquee\n");
    ret = ft_strlcpy(dst_cpy, src_cpy, 5);
    printf("Attendu : Bonj / longueur 9\n");
    printf("Obtenu  : %s / longueur %zu\n", dst_cpy, ret);
	
	return(0);
}*/