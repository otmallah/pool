/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_range.c                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 20:49:47 by otmallah          #+#    #+#             */
/*   Updated: 2021/07/14 08:18:00 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	ft_ultimate_range(int **range, int min, int max)
{
	int	i;

	i = 0;
	if (min >= max)
	{
		*range = NULL;
		return (0);
	}
	*range = malloc(sizeof(int) * (max - min));
	if (*range == 0)
		return (-1);
	while (min < max)
	{
		(*range)[i] = min;
		min++;
		i++;
	}
	return (i);
}

/*int	main()
{
	int i , j;
	int *p;

	j = 0;
	i = ft_ultimate_range(&p , 10 , 50);
	printf("size is %d\n" , i);
	while (j < 40)
	{
		printf("%d" , p[j]);
		j++;
	}
}*/
