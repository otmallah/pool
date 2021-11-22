/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   f.c                                                :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/06/30 12:03:24 by otmallah          #+#    #+#             */
/*   Updated: 2021/07/03 16:37:04 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_islowercase(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		if (str[i] >= 'A' && str[i] <= 'Z')
			str[i] = str[i] + 32;
		else
			str[i] = str[i];
		i++;
	}
	return (str);
}

char	*ft_strcapitalize(char *str)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	ft_islowercase(str);
	while (str[i])
	{
		if (str[i] >= 'a' && str[i] <= 'z')
		{
			if (j == 0)
			{
				str[i] = str[i] - 32;
				j = 1;
			}
		}
		else if (str[i] >= '0' && str[i] <= '9' )
			j = 1;
		else
			j = 0;
		i++;
	}
	return (str);
}
