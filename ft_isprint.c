/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:37:55 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:37:57 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isprint(int c)
{
	if (c >= 32 && c <= 126)
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
    printf("Obtenu  : %d\n", ft_isprint('B'));
    
    printf("Cas : tabulation\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", ft_isprint('\t'));
    
    printf("Cas : chiffre\n");
    printf("Attendu : 1\n");
    printf("Obtenu  : %d\n", ft_isprint('2'));
    
    return(0);
}*/
