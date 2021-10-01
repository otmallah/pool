/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: otmallah <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/07/06 09:05:35 by otmallah          #+#    #+#             */
/*   Updated: 2021/07/07 11:20:56 by otmallah         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

unsigned int	st_len(char	*str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	j;
	unsigned int	a;
	unsigned int	b;
	unsigned int	h;

	j = 0;
	b = st_len(src);
	a = st_len(dest);
	h = a;
	if (a >= size)
		return (size + b);
	while ((src[j] != '\0') && (a < size - 1))
	{
		dest[a] = src[j];
		j++;
		a++;
	}
	dest[a] = '\0';
	return (b + h);
}

int main()
{
	char	d[] = "salam";
	char	s[] = "labas";
	printf("%d\n", ft_strlcat(d, s, 5));
	printf("%d\n", strlcat(d, s, 5));
}
