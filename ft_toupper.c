/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:40:42 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:40:45 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
		c = c - 32;
	return (c);
}

/*
#include <stdio.h>
int	main(void)
{
	printf("Cas : espace\n");
    printf("Attendu : ' ' (espace inchange)\n");
    printf("Obtenu  : %c\n", ft_toupper(' '));

    printf("Cas : lettre minuscule\n");
    printf("Attendu : A\n");
    printf("Obtenu  : %c\n", ft_toupper('a'));

    printf("Cas : chiffre\n");
    printf("Attendu : 1\n");
    printf("Obtenu  : %c\n", ft_toupper('1'));
	
	return(0);
}*/
