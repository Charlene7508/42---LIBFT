/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_tolower.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:40:56 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:41:02 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_tolower(int c)
{
	if (c >= 'A' && c <= 'Z')
		c = c + 32;
	return (c);
}

/*
#include <stdio.h>
int	main(void)
{
    printf("Cas : espace\n");
    printf("Attendu : ' ' (espace inchange)\n");
    printf("Obtenu  : %c\n", ft_tolower(' '));
    
    printf("Cas : lettre majuscule\n");
    printf("Attendu : a\n");
    printf("Obtenu  : %c\n", ft_tolower('A'));
   
    printf("Cas : chiffre\n");
    printf("Attendu : 1\n");
    printf("Obtenu  : %c\n", ft_tolower('1'));
	
    return(0);
}*/
