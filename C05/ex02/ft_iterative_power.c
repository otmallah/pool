/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:10:40 by otmallah          #+#    #+#             */
/*   Updated: 2021/07/12 15:43:33 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	x;

	x = 1;
	if (power == 0 || nb == 1)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	while (power > 0)
	{
		x = x * nb;
		power--;
	}
	return (x);
}
