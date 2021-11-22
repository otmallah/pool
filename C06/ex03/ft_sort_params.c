/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_params.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/07 13:40:09 by otmallah          #+#    #+#             */
/*   Updated: 2021/07/10 14:57:31 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_parametre(int s, char **b)
{
	int	i;
	int	a;

	i = 0;
	a = 1;
	while (a <= (s - 1))
	{
		while (b[a][i])
		{
			write (1, &b[a][i], 1);
			i++;
		}
		i = 0;
		write (1, "\n", 1);
		a++;
	}
}

int	ft_strcmp(char *s1, char *s2)
{
	int	i;

	i = 0;
	while (s1[i] || s2[i])
	{
		if (s1[i] != s2[i])
			return (s1[i] - s2[i]);
		i++;
	}
	return (0);
}

int	main(int ac, char **av)
{
	int		i;
	int		k;
	char	*temp;

	i = 1;
	if (ac > 1)
	{
		while (i < (ac - 1))
		{
			k = ft_strcmp(av[i], av[i + 1]);
			if (k > 0)
			{
				temp = av[i];
				av[i] = av[i + 1];
				av[i + 1] = temp;
				i = 0;
			}
			i++;
		}
		ft_print_parametre(ac, av);
	}
}
