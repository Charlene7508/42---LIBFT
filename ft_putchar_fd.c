/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putchar_fd.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:55:41 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 10:56:59 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putchar_fd(char c, int fd)
{
	write(fd, &c, 1);
}

/*
#include <stdio.h>
int	main(void)
{
    printf("Cas : affichage stdout classique\n");
    printf("Attendu : A\n");
    printf("Obtenu  : ");
    ft_putchar_fd('A', 1);
    ft_putchar_fd('\n', 1);

    printf("Cas : affichage stderr\n");
    printf("Attendu : E\n");
    printf("Obtenu  : ");
    ft_putchar_fd('E', 2);
    ft_putchar_fd('\n', 2);

   return(0);
}*/
