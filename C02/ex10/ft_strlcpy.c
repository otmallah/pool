/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/01 11:43:34 by otmallah          #+#    #+#             */
/*   Updated: 2021/07/04 16:41:45 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	int	i;
	int	j;
	int	o;

	o = 0;
	while (src[o] != '\0')
	{
		o++;
	}	
	i = 0;
	j = size - 1;
	while ((src[i] != '\0') && (i < j))
	{
		dest[i] = src[i];
		i++;
	}
	dest[i] = '\0';
	return (o);
}
