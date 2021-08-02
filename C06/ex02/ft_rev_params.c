#include <unistd.h>

int	main(int	c, char	**v)
{
	int	i;
	int	j;

	i = 0;
	j = c - 1;
	while (j > 0)
	{
		while (v[j][i])
		{
			write(1, &v[j][i], 1);
			i++;
		}
		write(1, "\n", 1);
		i = 0;
		j--;
	}
}
