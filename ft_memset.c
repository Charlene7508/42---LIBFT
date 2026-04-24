#include "libft.h"

void	*ft_memset(void *ptr, int value, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)ptr)[i] = value;
		i++;
	}
	return (ptr);
}

/*
#include <stdio.h>
int	main(void)
{
    char ptr[10] = "Bonjour!!";
    ft_memset(ptr, '*', 4);
    printf("Attendu : ****our!!\n");
    printf("Obtenu  : %s\n", ptr);

	return(0);
}*/