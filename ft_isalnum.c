/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:37:19 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:37:23 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if ((c >= 'A' && c <= 'Z')
		|| (c >= 'a' && c <= 'z')
		|| (c >= '0' && c <= '9'))
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int	main(void)
{
    printf("Cas : lettre\n");
    printf("Attendu : 1\n");
    printf("Obtenu  : %d\n", ft_isalnum('B'));
    
    printf("Cas : espace\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", ft_isalnum(' '));
    
    printf("Cas : chiffre\n");
    printf("Attendu : 1\n");
    printf("Obtenu  : %d\n", ft_isalnum('2'));
    
    return(0);
}*/
