int	ft_sqrt(int nb)
{
	unsigned int	nbr;
	unsigned int	a;

	a = 0;
	nbr = nb;
	while (a * a < nbr)
		a++;
	if (a * a == nbr)
		return (a);
	else
		return (0);
}

int	main()
{
	printf("sqrt of %d is %d\n", -245, ft_sqrt(-245));
	printf("sqrt of %d is %d\n", 0, ft_sqrt(0));
	printf("sqrt of %d is %d\n", 1, ft_sqrt(1));
	printf("sqrt of %d is %d\n", 2, ft_sqrt(2));
	printf("sqrt of %d is %d\n", 1640045925, ft_sqrt(1640045925));
	printf("sqrt of %d is %d\n", 2147395600, ft_sqrt(2147395600));
	printf("sqrt of %d is %d\n", 2147483646, ft_sqrt(2147483646));
	printf("sqrt of %d is %d\n", 383219776, ft_sqrt(383219776));
	printf("sqrt of %d is %d\n", 1142800979, ft_sqrt(1142800979));
	printf("sqrt of %d is %d\n", 10725625, ft_sqrt(10725625));
	printf("sqrt of %d is %d\n", 1814941676, ft_sqrt(1814941676));
	printf("sqrt of %d is %d\n", 763748496, ft_sqrt(763748496));
	printf("sqrt of %d is %d\n", 462452333, ft_sqrt(462452333));
	printf("sqrt of %d is %d\n", 371024644, ft_sqrt(371024644));
	printf("sqrt of %d is %d\n", 1076607083, ft_sqrt(1076607083));
	printf("sqrt of %d is %d\n", 388838961, ft_sqrt(388838961));
	printf("sqrt of %d is %d\n", 890336703, ft_sqrt(890336703));
}
