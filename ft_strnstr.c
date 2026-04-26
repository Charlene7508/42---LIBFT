/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:44:03 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:44:13 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *str, const char *to_find, size_t n)
{
	size_t	i;
	size_t	j;

	if (to_find[0] == '\0')
		return ((char *)str);
	if (n == 0)
		return (NULL);
	i = 0;
	while (str[i] != '\0' && i < n)
	{
		j = 0;
		while (str[i + j] != '\0' && to_find[j] != '\0'
			&& (i + j) < n
			&& str[i + j] == to_find[j])
			j++;
		if (to_find[j] == '\0')
			return ((char *)&str[i]);
		i++;
	}
	return (NULL);
}

/*
#include <stdio.h>
int	main(void)
{
	char *result_strnstr;

    printf("Cas : substring trouvee\n");
    result_strnstr = ft_strnstr("Bonjour", "jour", 7);
    printf("Attendu : jour\n");
    printf("Obtenu  : %s\n", result_strnstr);

    printf("Cas : substring absente\n");
    result_strnstr = ft_strnstr("Bonjour", "soir", 7);
    printf("Attendu : (nil)\n");
    printf("Obtenu  : %p\n", (void *)result_strnstr);

    printf("Cas : to_find vide\n");
    result_strnstr = ft_strnstr("Bonjour", "", 7);
    printf("Attendu : Bonjour\n");
    printf("Obtenu  : %s\n", result_strnstr);

    printf("Cas : n = 0\n");
    result_strnstr = ft_strnstr("Bonjour", "jour", 0);
    printf("Attendu : (nil)\n");
    printf("Obtenu  : %p\n", (void *)result_strnstr);

   	return(0);
}*/
