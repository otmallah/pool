/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_range.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ie-laabb <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 12:07:06 by ie-laabb          #+#    #+#             */
/*   Updated: 2021/07/15 13:36:18 by ie-laabb         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

int	*ft_range(int min, int max)
{
	int		a;
	int		j;
	int		*t;

	j = 0;
	a = max - min;
	if (a <= 0)
		return (NULL);
	t = (int *)malloc(sizeof(int) * (a));
	if (!t)
		return (NULL);
	while (j < a)
	{
		t[j] = min + j;
		j++;
	}
	return (t);
}
/*
#include <stdio.h>
int main()
{
	int *t = ft_range(0, 10);
	int i = 0;
	while (i < 10)
	{
		printf("|%d|", t[i]);
		i++;
	}
	printf("\n");
}*/
