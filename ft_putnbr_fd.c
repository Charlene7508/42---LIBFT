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
