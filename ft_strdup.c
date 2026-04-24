#include "libft.h"

char	*ft_strdup(const char *src)
{
	size_t	i;
	size_t	length;
	char	*new_tab;

	if (src == NULL)
		return (NULL);
	length = ft_strlen(src);
	new_tab = malloc(sizeof(char) * (length + 1));
	if (new_tab == NULL)
		return (NULL);
	i = 0;
	while (i < length)
	{
		new_tab[i] = src[i];
		i++;
	}
	new_tab[i] = '\0';
	return (new_tab);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("Cas : string normale\n");
    char *dup = ft_strdup("Bonjour");
    printf("Attendu : Bonjour\n");
    printf("Obtenu  : %s\n", dup);
    free(dup);

    printf("Cas : string vide\n");
    char *dup2 = ft_strdup("");
    printf("Attendu : (vide) longueur 0\n");
    printf("Obtenu  : %s longueur %zu\n", dup2, ft_strlen(dup2));
    free(dup2);

   	return(0);
}*/