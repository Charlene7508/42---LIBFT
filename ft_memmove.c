#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t n)
{
	size_t	i;

	if (dst == NULL || src == NULL)
		return (NULL);
	if (dst > src)
	{
		i = n;
		while (i > 0)
		{
			i--;
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
		}
	}
	else
	{
		i = 0;
		while (i < n)
		{
			((unsigned char *)dst)[i] = ((unsigned char *)src)[i];
			i++;
		}
	}
	return (dst);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("Cas : zones separees\n");
    char src_move[10] = "Bonjour!!";
    char dst_move[10];
    ft_memmove(dst_move, src_move, 10);
    printf("Attendu : Bonjour!!\n");
    printf("Obtenu  : %s\n", dst_move);

    printf("Cas : dst > src chevauchement\n");
    char s1[] = "ABCDE";
    ft_memmove(s1 + 2, s1, 3);
    printf("Attendu : ABABC\n");
    printf("Obtenu  : %s\n", s1);

    printf("Cas : dst < src chevauchement\n");
    char s2[] = "ABCDE";
    ft_memmove(s2, s2 + 2, 3);
    printf("Attendu : CDEDE\n");
    printf("Obtenu  : %s\n", s2);

    printf("Cas : NULL et size = 0\n");
    char *test_move = ft_memmove(NULL, NULL, 0);
    printf("Attendu : (nil)\n");
    printf("Obtenu  : %p\n", (void *)test_move);
	
	return(0);
}*/