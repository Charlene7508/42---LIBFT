/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcmp.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:43:45 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:43:49 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_memcmp(const void *s1, const void *s2, size_t n)
{
	unsigned char	*p1;
	unsigned char	*p2;
	size_t			i;

	p1 = (unsigned char *)s1;
	p2 = (unsigned char *)s2;
	i = 0;
	while (i < n)
	{
		if (p1[i] != p2[i])
			return (p1[i] - p2[i]);
		else
			i++;
	}
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
	char str_memcmp[] = "Bonjour";
    int result_memcmp;

    printf("Cas : zones identiques\n");
    result_memcmp = ft_memcmp(str_memcmp, "Bonjour", 8);
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", result_memcmp);

    printf("Cas : premier < second\n");
    result_memcmp = ft_memcmp(str_memcmp, "Bonsoir", 8);
    printf("Attendu : negatif\n");
    printf("Obtenu  : %d\n", result_memcmp);

    printf("Cas : premier > second\n");
    result_memcmp = ft_memcmp(str_memcmp, "Aurevoir", 9);
    printf("Attendu : positif\n");
    printf("Obtenu  : %d\n", result_memcmp);

   	return(0);
}*/
