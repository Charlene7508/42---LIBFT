#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*sub;
	size_t	real_len;
	size_t	i;
	size_t	j;

	if (s == NULL)
		return (NULL);
	if (start >= ft_strlen(s))
		return (ft_calloc(1, 1));
	real_len = ft_strlen(s + start);
	if (real_len > len)
		real_len = len;
	sub = malloc(sizeof(char) * (real_len + 1));
	if (sub == NULL)
		return (NULL);
	i = start;
	j = 0;
	while (s[i] != '\0' && j < real_len)
	{
		sub[j] = s[i];
		i++;
		j++;
	}
	sub[j] = '\0';
	return (sub);
}

/*
#include <stdio.h>
int	main(void)
{
	char *sub;

    printf("Cas : cas normal\n");
    sub = ft_substr("Hello", 2, 6);
    printf("Attendu : llo\n");
    printf("Obtenu  : %s\n", sub);
    free(sub);

    printf("Cas : start > longueur de s\n");
    sub = ft_substr("Hello", 10, 3);
    printf("Attendu : (vide)\n");
    printf("Obtenu  : %s\n", sub);
    free(sub);

    printf("Cas : s = NULL\n");
    sub = ft_substr(NULL, 0, 3);
    printf("Attendu : (nil)\n");
    printf("Obtenu  : %p\n", (void *)sub);
    free(sub);

   	return(0);
}*/