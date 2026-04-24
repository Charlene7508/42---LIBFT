#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	void	*ptr;

	if (count == 0 || size == 0)
		return (malloc(0));
	if (size > SIZE_MAX / count)
		return (NULL);
	ptr = malloc(count * size);
	if (ptr == NULL)
		return (NULL);
	ft_bzero(ptr, count * size);
	return (ptr);
}

/*
#include <stdio.h>
int	main(void)
{
	int *tab;

    printf("Cas : tableau d'int initialise a 0\n");
    tab = ft_calloc(5, sizeof(int));
    printf("Attendu : 0 0 0 0 0\n");
    printf("Obtenu  : %d %d %d %d %d\n",
        tab[0], tab[1], tab[2], tab[3], tab[4]);
    free(tab);

    printf("Cas : tableau de char initialise a 0\n");
    char *str_calloc = ft_calloc(10, sizeof(char));
    printf("Attendu : (vide)\n");
    printf("Obtenu  : %s\n", str_calloc);
    free(str_calloc);

    printf("Cas : count = 0\n");
    void *ptr_calloc = ft_calloc(0, sizeof(int));
    printf("Attendu : adresse valide\n");
    printf("Obtenu  : %p\n", ptr_calloc);
    free(ptr_calloc);

    printf("Cas : size = 0\n");
    ptr_calloc = ft_calloc(5, 0);
    printf("Attendu : adresse valide\n");
    printf("Obtenu  : %p\n", ptr_calloc);
    free(ptr_calloc);

    printf("Cas : overflow SIZE_MAX\n");
    tab = ft_calloc(SIZE_MAX, sizeof(int));
    printf("Attendu : (nil)\n");
    printf("Obtenu  : %p\n", (void *)tab);
    free(tab);

   	return(0);
}*/