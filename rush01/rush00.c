/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/22 16:06:47 by otmallah          #+#    #+#             */
/*   Updated: 2021/11/22 16:06:54 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c);

void	rush(long int width, long int length)
{
	int	a;
	int	b;

	a = 1;
	if (width > 0 && length > 0)
	{	
		while (a <= length)
		{
			if (a == 1 || a == length)
			{
				ft_putchar('o');
				b = 0;
				while (b < (width - 2))
				{
					ft_putchar('-');
					b++;
				}
				if (width > 1 || length != 1)
					ft_putchar('o');
			}
			else if (a != 1 || a != length)
			{
				ft_putchar ('|');
				b = 0;
				while (b < (width - 2))
				{
					ft_putchar(' ');
					b++;
				}
				if (width > 1 && length != 1)
					ft_putchar('|');
			}
			ft_putchar('\n');
			a++;
		}
	}
}
