/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/13 14:58:31 by otmallah          #+#    #+#             */
/*   Updated: 2021/07/13 20:48:50 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	*ft_strcat(char *s, char *b)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (s[i])
		i++;
	while (b[j])
	{
		s[i + j] = b[j];
		j++;
	}
	s[i + j] = '\0';
	return (s);
}

int	ft_lenght(int a, char **b, char *c)
{
	int	i;
	int	lenght;

	i = 0;
	while (i < a)
	{
		lenght = lenght + ft_strlen(b[i]);
		i++;
	}
	lenght = lenght + (a - 1) * ft_strlen(c);
	return (lenght);
}

char	*ft_strjoin(int size, char **strs, char *sep)
{
	int		i;
	char	*s2;

	i = 0;
	if (size == 0)
	{
		s2 = malloc(sizeof(char) * 1);
		s2 = 0;
		return (s2);
	}
	ft_lenght(size, strs, sep);
	s2 = (char *) malloc(sizeof(char) * (ft_lenght(size, strs, sep)));
	s2[0] = '\0';
	if (s2 == 0)
		return (NULL);
	while (i < size)
	{
		ft_strcat(s2, strs[i]);
		if (i < size - 1)
			ft_strcat(s2, sep);
		i++;
	}
	return (s2);
}
