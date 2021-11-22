/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/05 20:55:32 by otmallah          #+#    #+#             */
/*   Updated: 2021/07/12 12:50:53 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	sqrt;

	sqrt = 1;
	if (nb < 0)
		return (0);
	while (sqrt * sqrt < nb && sqrt < nb / sqrt)
		sqrt++;
	if (sqrt * sqrt == nb)
		return (sqrt);
	return (0);
}
