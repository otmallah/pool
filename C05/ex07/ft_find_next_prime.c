/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 11:44:40 by otmallah          #+#    #+#             */
/*   Updated: 2021/07/12 14:06:26 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_is_prime(int nb)
{
	int	pr;

	pr = 2;
	if (nb == 2147483647)
		return (2147483647);
	if (nb <= 1)
		return (0);
	while (pr < (nb / pr))
	{
		if ((nb % pr) == 0)
			return (0);
		pr++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	while (!ft_is_prime(nb))
		nb += 1;
	return (nb);
}
