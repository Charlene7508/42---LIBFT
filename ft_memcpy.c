#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL || src == NULL)
	{
		if (n == 0)
			return (dst);
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		i++;
	}
	return (dst);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("Cas : copie normale\n");
    char src[10] = "Bonjour!!";
    char dst[10] = {0};
    ft_memcpy(dst, src, 9);
    printf("Attendu : Bonjour!!\n");
    printf("Obtenu  : %s\n", dst);
    
    printf("Cas : NULL et size = 0\n");
    char *test = ft_memcpy(NULL, src, 0);
    printf("Attendu : (nil)\n");
    printf("Obtenu  : %p\n", (void *)test);
	
	return(0);
}*/