/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/14 07:38:07 by otmallah          #+#    #+#             */
/*   Updated: 2021/07/14 07:39:03 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int	i;
	int	*array;

	i = 0;
	if (min < max)
	{
		array = (int *) malloc(sizeof(int) * (max - min));
		while (min < max)
		{
			array[i] = min;
			min++;
			i++;
		}
		return (array);
	}
	return (NULL);
}
/*int	main(void)
{
	int *i; 
	int  j;

	j = 0;
	i = ft_range(10 , 50);
	while (j < 40)
	{
		printf("%d" , *i);
		i++;
		j++;
	}
}*/
