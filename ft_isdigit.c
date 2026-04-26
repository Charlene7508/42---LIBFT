/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:36:59 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:37:07 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

/*
#include <stdio.h>
int	main(void)
{
    printf("Cas : lettre\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", ft_isdigit('B'));
    
    printf("Cas : espace\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", ft_isdigit(' '));
    
    printf("Cas : chiffre\n");
    printf("Attendu : 1\n");
    printf("Obtenu  : %d\n", ft_isdigit('2'));
    
    return(0);
}*/
