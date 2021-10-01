/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 12:06:32 by otmallah          #+#    #+#             */
/*   Updated: 2021/07/15 13:36:25 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>

char	*ft_strdup(char *src)
{
	char	*c;
	int		i;
	int		j;

	i = 0;
	j = 0;
	while (src[i] != '\0')
		i++;
	c = (char *)malloc(sizeof(char) * (i + 1));
	if (!c)
		return (NULL);
	while (src[j] != '\0')
	{
		c[j] = src[j];
		j++;
	}
	c[j] = '\0';
	return (c);
}
