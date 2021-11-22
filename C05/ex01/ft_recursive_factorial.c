/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/11 17:07:44 by otmallah          #+#    #+#             */
/*   Updated: 2021/07/12 20:14:16 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if ((nb == 0) || (nb == 1))
		return (1);
	else if (nb > 1)
	{
		return (nb * ft_recursive_factorial(nb - 1));
	}
	return (0);
}
