#include "libft.h"

char	*ft_strmapi(char const *s, char (*f)(unsigned int, char))
{
	char	*str;
	size_t	i;

	if (s == NULL || f == NULL)
		return (NULL);
	str = malloc(sizeof(char) * (ft_strlen(s) + 1));
	if (str == NULL)
		return (NULL);
	i = 0;
	while (s[i] != '\0')
	{
		str[i] = f(i, s[i]);
		i++;
	}
	str[i] = '\0';
	return (str);
}

/*
#include <stdio.h>
static char    to_upper_if_even(unsigned int i, char c)
{
    if (i % 2 == 0)
        return (ft_toupper(c));
    return (c);
}

int	main(void)
{
 	char *strmap;

    printf("Cas : cas normal\n");
    strmap = ft_strmapi("hello", to_upper_if_even);
    printf("Attendu : HeLlO\n");
    printf("Obtenu  : %s\n", strmap);
    free(strmap);

    printf("Cas : string NULL\n");
    strmap = ft_strmapi(NULL, to_upper_if_even);
    printf("Attendu : (nil)\n");
    printf("Obtenu  : %p\n", (void *)strmap);
    free(strmap);
	

   	return(0);
}*/