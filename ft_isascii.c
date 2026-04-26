/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:37:40 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:37:44 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isascii(int c)
{
	if (c >= 0 && c <= 127)
		return (1);
	return (0);
}

/*
#include <stdio.h>
int	main(void)
{
    printf("Cas : lettre\n");
    printf("Attendu : 1\n");
    printf("Obtenu  : %d\n", ft_isascii('B'));
    
    printf("Cas : espace\n");
    printf("Attendu : 1\n");
    printf("Obtenu  : %d\n", ft_isascii(' '));
    
    printf("Cas : hors ascii\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", ft_isascii(200));
    
    return(0);
}*/
