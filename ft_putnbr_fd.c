/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: chlepain <chlepain@learner.42.tech>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/04/25 10:59:55 by chlepain          #+#    #+#             */
/*   Updated: 2026/04/25 11:08:48 by chlepain         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_putnbr_fd(int nb, int fd)
{
	char	c;

	if (nb == -2147483648)
	{
		write (fd, "-2147483648", 11);
		return ;
	}
	if (nb < 0)
	{
		ft_putchar_fd ('-', fd);
		nb = -nb;
	}
	if (nb <= 9)
	{
		c = '0' + (nb % 10);
		ft_putchar_fd(c, fd);
		return ;
	}
	else
		ft_putnbr_fd(nb / 10, fd);
	c = '0' + (nb % 10);
	ft_putchar_fd(c, fd);
}

/*
#include <stdio.h>
int	main(void)
{
    printf("Cas : affichage stdout classique\n");
    printf("Attendu : 42\n");
    ft_putnbr_fd(42, 1);
    ft_putchar_fd('\n', 1);

    printf("Cas : nbr negatif\n");
    printf("Attendu : -42\n");
    ft_putnbr_fd(-42, 1);
    ft_putchar_fd('\n', 1);

    printf("Cas : INT MAX\n");
    printf("Attendu : 2147483647\n");
    ft_putnbr_fd(2147483647, 1);
    ft_putchar_fd('\n', 1);

    printf("Cas : INT MIN\n");
    printf("Attendu : -2147483648\n");
    ft_putnbr_fd(-2147483648, 1);
    ft_putchar_fd('\n', 1);

    printf("Cas : affichage stderr\n");
    printf("Attendu : 4333\n");
    ft_putnbr_fd(4333, 2);
    ft_putchar_fd('\n', 2);
	
   return(0);
}*/
