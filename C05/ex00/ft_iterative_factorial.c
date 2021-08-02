int	ft_iterative_factorial(int nb)
{
	int	a;

	a = 1;
	if (nb < 0)
		return (0);
	while (nb >= 1)
	{
		a = a * nb;
		nb--;
	}
	return (a);
}
