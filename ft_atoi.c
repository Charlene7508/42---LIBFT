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
