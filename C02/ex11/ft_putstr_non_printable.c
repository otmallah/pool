/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_non_printable.c                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/03 14:22:33 by otmallah          #+#    #+#             */
/*   Updated: 2021/07/04 11:41:02 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	print(char c)
{
	write (1, &c, 1);
}

void	hex(char b)
{
	char	*s;

	s = "0123456789abcdef";
	print(s[b / 16]);
	print(s[b % 16]);
}

void	ft_putstr_non_printable(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		if (str[i] < ' ' || str[i] == 127 )
		{
			print('\\');
			hex(str[i]);
		}
		else
			print(str[i]);
		i++;
	}
}
