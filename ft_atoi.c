#include "libft.h"

static int	ft_isspace(char c)
{
	return (c == ' ' || c == '\t'
		|| c == '\n' || c == '\r'
		|| c == '\f' || c == '\v');
}

static int	ft_resultat(const char *str, int i)
{
	int	resultat;

	resultat = 0;
	while (str[i] >= '0' && str[i] <= '9')
	{
		resultat = resultat * 10 + (str[i] - '0');
		i++;
	}
	return (resultat);
}

int	ft_atoi(const char *str)
{
	int	i;
	int	signe;
	int	nb;

	i = 0;
	while (ft_isspace(str[i]))
		i++;
	signe = 1;
	nb = 0;
	while (str[i] == '+' || str[i] == '-')
	{
		if (str[i] == '-')
			signe = signe * -1;
		i++;
		nb++;
	}
	if (nb > 1)
		return (0);
	return (ft_resultat(str, i) * signe);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("Cas : nombre positif\n");
    printf("Attendu : 85\n");
    printf("Obtenu  : %d\n", ft_atoi("85"));

    printf("Cas : nombre negatif\n");
    printf("Attendu : -85\n");
    printf("Obtenu  : %d\n", ft_atoi("-85"));

    printf("Cas : signe +\n");
    printf("Attendu : 85\n");
    printf("Obtenu  : %d\n", ft_atoi("+85"));

    printf("Cas : espaces avant\n");
    printf("Attendu : 85\n");
    printf("Obtenu  : %d\n", ft_atoi("   85"));

    printf("Cas : caracteres apres\n");
    printf("Attendu : 85\n");
    printf("Obtenu  : %d\n", ft_atoi("85abc"));

    printf("Cas : plusieurs signes\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", ft_atoi("+-85"));

    printf("Cas : string vide\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", ft_atoi(""));

    printf("Cas : que des espaces\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", ft_atoi("   "));

    printf("Cas : zero\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", ft_atoi("0"));

   	return(0);
}*/