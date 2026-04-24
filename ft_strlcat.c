#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;
	size_t	j;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	if (dst_len >= size)
		return (size + src_len);
	j = dst_len;
	i = 0;
	if (size > 0)
	{
		while (src[i] != '\0' && j < size - 1)
		{
			dst[j] = src[i];
			j++;
			i++;
		}
		dst[j] = '\0';
	}
	return (dst_len + src_len);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("Cas : concatenation normale\n");
    char src_cat[] = "stud 42 !";
    char dst_cat[20] = "Bonjour ";
    size_t ret_cat;
    ret_cat = ft_strlcat(dst_cat, src_cat, 20);
    printf("Attendu : Bonjour stud 42 ! / longueur 17\n");
    printf("Obtenu  : %s / longueur %zu\n", dst_cat, ret_cat);

    printf("Cas : concatenation tronquee\n");
    char dst_cat2[10] = "Bonjour ";
    ret_cat = ft_strlcat(dst_cat2, src_cat, 10);
    printf("Attendu : Bonjour s / longueur 17\n");
    printf("Obtenu  : %s / longueur %zu\n", dst_cat2, ret_cat);

    printf("Cas : strlen dst > size\n");
    char dst_cat3[20] = "Bonjour ";
    ret_cat = ft_strlcat(dst_cat3, src_cat, 3);
    printf("Attendu : longueur 12\n");
    printf("Obtenu  : longueur %zu\n", ret_cat);
	
	return(0);
}*/