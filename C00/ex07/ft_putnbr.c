#include <unistd.h>

void	ft_putchar(char v)
{
	 write(1, &v, 1);
}

void	ft_putnbr(int	nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		nb = 147483648;
	}
	if (nb < 0 && nb != -2147483648)
	{
		nb = -nb;
		ft_putchar('-');
	}
	if (nb <= 9)
	{
		ft_putchar(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
