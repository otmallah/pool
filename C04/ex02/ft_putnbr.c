#include <unistd.h>

void	s(char	c)
{
	write(1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		s('-');
		s('2');
		nb = 147483648;
	}
	if ((nb < 0) && (nb != -2147483648))
	{
		nb = -nb;
		s('-');
	}
	if (nb <= 9)
	{
		s(nb + '0');
	}
	else
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
}
