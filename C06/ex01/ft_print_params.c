#include <unistd.h>

int	main(int	c, char	**v)
{
	int	i;
	int	j;
	int	a;

	i = 0;
	j = 1;
	a = c - 1;
	while (j <= a)
	{
		while (v[j][i] != '\0')
		{
			write(1, &v[j][i], 1);
			i++;
		}
		i = 0;
		write(1, "\n", 1);
		j++;
	}
}
