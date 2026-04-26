/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:38:58 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:39:02 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	size_t	i;

	i = 0;
	while (i < n)
	{
		((unsigned char *)s)[i] = 0;
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
    char s[10] = "Bonjour!!";
    ft_bzero(s, 4);
    printf("Attendu : (4 octets nuls)our!!\n");
    printf("Obtenu  : %s\n", s + 4);
	
	return(0);
}*/
