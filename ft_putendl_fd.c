/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putendl_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:58:18 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:59:22 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putendl_fd(char *s, int fd)
{
	ft_putstr_fd(s, fd);
	ft_putchar_fd('\n', fd);
}

/*
#include <stdio.h>
int	main(void)
{
    printf("Cas : affichage stdout classique\n");
    printf("Attendu : Hello 42\n");
    printf("Obtenu  : ");
    ft_putendl_fd("Hello 42", 1);

    printf("Cas : affichage stderr\n");
    printf("Attendu : Erreur 43\n");
    printf("Obtenu  : ");
    ft_putendl_fd("Erreur 43", 2);
	
   return(0);
}*/
