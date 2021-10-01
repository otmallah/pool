/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strs_to_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/15 20:55:50 by otmallah          #+#    #+#             */
/*   Updated: 2021/07/15 20:57:21 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_stock_str.h"
#include <stdlib.h>

int	ft_strlen(char *str)
{
	int	c;

	c = 0;
	while (str[c] != '\0')
		c++;
	return (c);
}

char	*ft_strdup(char *src)
{
	char	*s2;
	int		i;
	int		n;

	i = 0;
	n = 0;
	while (src[n] != '\0')
		n++;
	s2 = malloc(sizeof(*src) * (n + 1));
	while (src[i] != '\0')
	{
		s2[i] = src[i];
		i++;
	}
	s2[i] = '\0';
	return (s2);
}

struct s_stock_str	*ft_strs_to_tab(int arc, char **arv)
{
	t_stock_str	*b_arv;
	int			i;

	i = 0;
	b_arv = malloc(sizeof(t_stock_str) * (arc + 1));
	if (!b_arv)
		return (0);
	while (i < arc)
	{
		b_arv[i].size = ft_strlen(arv[i]);
		b_arv[i].str = arv[i];
		b_arv[i].copy = ft_strdup(arv[i]);
		i++;
	}
	b_arv[i].size = 0;
	b_arv[i].str = 0;
	b_arv[i].copy = 0;
	return (b_arv);
}
