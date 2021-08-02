#include <stdlib.h>

char	scat(char	*dest, char	*src)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (dest[i] != '\0')
		i++;
	while (src[j] != '\0')
	{
		dest[i + j] = src[j];
		j++;
	}
	dest[i + j] = '\0';
	return (*dest);
}

int	destln(int	s, char	**str)
{
	int	a;
	int	b;
	int	c;

	a = 0;
	c = 0;
	while (a < s)
	{
		b = 0;
		while (str[a][b] != '\0')
		{
			b++;
			c++;
		}
		a++;
	}
	return (c);
}

char	*salam(int size, char	*c)
{
	if (size == 0)
	{
		c = malloc(sizeof(char) * 1);
		c = 0;
		return (c);
	}
	return (c);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	char	*c;
	int		i;
	int		j;
	int		k;

	i = 0;
	c = NULL;
	j = 0;
	salam(size, c);
	k = destln(size, strs);
	while (sep[i])
		i++;
	c = (char *)malloc(sizeof(char) * (k + (i * (size - 1) + 1)));
	c[0] = '\0';
	if (c == 0)
		return (NULL);
	while (j < size)
	{
		scat(c, strs[j]);
		if (j < size - 1)
			scat(c, sep);
		j++;
	}
	return (c);
}
/*
#include<stdio.h>
int	main()
{
	char *str[] = {"salam","l3antiz",""};
	char sep[] = "+++";
	printf("%s\n", ft_strjoin(3, str, sep));
}*/
