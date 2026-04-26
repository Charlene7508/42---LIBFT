/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalpha.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:36:42 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 11:31:32 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalpha(int c)
{
	if ((c >= 'A' && c <= 'Z') || (c >= 'a' && c <= 'z'))
		return (1);
	else
		return (0);
}

/*#include <stdio.h>
int	main(void)
{
    printf("Cas : lettre\n");
    printf("Attendu : 1\n");
    printf("Obtenu  : %d\n", ft_isalpha('B'));
    
    printf("Cas : espace\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", ft_isalpha(' '));
    
    printf("Cas : chiffre\n");
    printf("Attendu : 0\n");
    printf("Obtenu  : %d\n", ft_isalpha('2'));
    
	return(0);
}*/
