/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:41:57 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 17:21:06 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_strncmp(const char *str1, const char *str2, size_t n)
{
	size_t			i;
	unsigned char	*p1;
	unsigned char	*p2;

	if (n == 0)
		return (0);
	i = 0;
	p1 = (unsigned char *)str1;
	p2 = (unsigned char *)str2;
	while (i < n - 1 && p1[i] != '\0' && p2[i] != '\0')
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		i++;
	}
	return (p1[i] - p2[i]);
}

/*
#include <stdio.h>
int	main(void)
{
    char str_1[] = "Bonjour";
    int result_cmp;

    printf("Cas : strings identiques\n");
    result_cmp = ft_strncmp(str_1, "Bonjour", 8);
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", result_cmp);

    printf("Cas : premier < second\n");
    result_cmp = ft_strncmp(str_1, "Bonsoir", 8);
    printf("Attendu : negatif\n");
    printf("Obtenu  : %d\n", result_cmp);

    printf("Cas : premier > second\n");
    result_cmp = ft_strncmp(str_1, "Aurevoir", 9);
    printf("Attendu : positif\n");
    printf("Obtenu  : %d\n", result_cmp);

    printf("Cas : n = 0\n");
    result_cmp = ft_strncmp(str_1, "Bonjour", 0);
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", result_cmp);

    printf("Cas : strings differentes longueurs\n");
    result_cmp = ft_strncmp(str_1, "Bonjourno", 9);
    printf("Attendu : -110\n");
    printf("Obtenu  : %d\n", result_cmp);

    return(0);
}*/
