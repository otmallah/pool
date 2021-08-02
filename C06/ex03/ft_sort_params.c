#include <unistd.h>

void	putchar(char	c)
{
	write(1, &c, 1);
}

int	cmp(char	*s1, char	*s2)
{
	int	i;

	i = 0;
	while (s1[i] != '\0' && s2[i] != '\0')
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (s1[i] - s2[i]);
}

void	print_para(int c, char	**v)
{
	int	a;
	int	b;

	a = 1;
	b = 0;
	while (a < c)
	{
		while (v[a][b])
		{
			p(v[a][b]);
			b++;
		}
		b = 0;
		a++;
		p('\n');
	}
}

int	main(int	c, char	**v)
{
	int		i;
	int		j;
	char	*temp;

	i = 1;
	j = c - 1;
	while (i < j)
	{
		if (a(v[i + 1], v[i]) < 0)
		{
			temp = v[i];
			v[i] = v[i + 1];
			v[i + 1] = temp;
			i = 0;
		}
		i++;
	}
	print_param(c, v);
	return (0);
}
