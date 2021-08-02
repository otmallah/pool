#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	a;
	int	j;

	j = 0;
	a = max - min;
	if (a <= 0)
	{
		*range = NULL;
		return (0);
	}
	*range = (int *)malloc(sizeof(int) * (a));
	if (!*range)
		return (-1);
	while (min < max)
	{
		(*range)[j] = min;
		j++;
		min++;
	}
	return (j);
}
/*
int	main(void)
{
	int i = 0;
	int size;
	int *range;
	size = ft_ultimate_range(&range, 0 , 20);
	printf("%d\n", ft_ultimate_range(&range,0 ,20));
	while (i < size)
	{
		printf("%d ", range[i]);
		i++;
	}	
	return (0);
}*/
