/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/27 08:03:07 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/06/28 09:40:58 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write(1, &c, 1);
}

void	print_nbr(int nbr)
{
	char	i;
	char	j;

	i = (nbr / 10) + '0';
	j = (nbr % 10) + '0';
	ft_putchar(i);
	ft_putchar(j);
}

void	space(int a, int b)
{
	if (!(a == 98 && b == 99))
	{
		ft_putchar(',');
		ft_putchar(' ');
	}
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
		b = a + 1;
		while (b <= 99)
		{
			print_nbr(a);
			ft_putchar(' ');
			print_nbr(b);
			space(a, b);
			b++;
		}
		a++;
	}	
}
