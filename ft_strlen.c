/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:38:12 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:38:18 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *str)
{
	size_t	len;

	len = 0;
	while (str[len] != '\0')
	{
		len++;
	}
	return (len);
}

/*
#include <stdio.h>
int	main(void)
{
    printf("Cas : string normale\n");
    printf("Attendu : 7\n");
    printf("Obtenu  : %zu\n", ft_strlen("Bonjour"));
    
    printf("Cas : string avec tabulation\n");
    printf("Attendu : 8\n");
    printf("Obtenu  : %zu\n", ft_strlen("Bonjo\tur"));
    
    printf("Cas : string vide\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %zu\n", ft_strlen(""));
    
    return(0);
}*/
