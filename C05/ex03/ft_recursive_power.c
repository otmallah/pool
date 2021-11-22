/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/12 10:42:44 by otmallah          #+#    #+#             */
/*   Updated: 2021/07/12 13:41:37 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	if (power == 0 || nb == 1)
		return (1);
	if (power < 0 || nb == 0)
		return (0);
	else if (power > 0)
		return (nb * ft_recursive_power(nb, power - 1));
	return (0);
}
