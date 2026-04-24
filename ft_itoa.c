#include "libft.h"

static int	count_char(long nb)
{
	int	count;

	count = 0;
	if (nb <= 0)
		count = 1;
	while (nb != 0)
	{
		nb = nb / 10;
		count++;
	}
	return (count);
}

static void	fill_result(char *result, long nb, int len)
{
	if (nb == 0)
	{
		result[0] = '0';
		return ;
	}
	while (nb > 0)
	{
		result[len] = '0' + (nb % 10);
		nb = nb / 10;
		len --;
	}
}

char	*ft_itoa(int n)
{
	char	*result;
	int		len;
	long	nb;

	nb = n;
	if (nb < 0)
		nb = -nb;
	len = count_char(n);
	result = malloc(sizeof(char) * (len + 1));
	if (result == NULL)
		return (NULL);
	result[len] = '\0';
	fill_result(result, nb, len -1);
	if (n < 0)
		result[0] = '-';
	return (result);
}

/*
#include <stdio.h>
int	main(void)
{
	char *asc;

    printf("Cas : nbre positif\n");
    asc = ft_itoa(85);
    printf("Attendu : 85\n");
    printf("Obtenu  : %s\n", asc);
    free(asc);

    printf("Cas : nbre negatif\n");
    asc = ft_itoa(-85);
    printf("Attendu : -85\n");
    printf("Obtenu  : %s\n", asc);
    free(asc);

    printf("Cas : nbre zero\n");
    asc = ft_itoa(0);
    printf("Attendu : 0\n");
    printf("Obtenu  : %s\n", asc);
    free(asc);

    printf("Cas : INT MIN\n");
    asc = ft_itoa(-2147483648);
    printf("Attendu : -2147483648\n");
    printf("Obtenu  : %s\n", asc);
    free(asc);

    printf("Cas : INT MAX\n");
    asc = ft_itoa(2147483647);
    printf("Attendu : 2147483647\n");
    printf("Obtenu  : %s\n", asc);
    free(asc);

   	return(0);
}*/