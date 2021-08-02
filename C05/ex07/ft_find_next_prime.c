int	ft_is_prime(int nb)
{
	int	i;

	i = 2;
	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	while (i < nb)
	{
		if (nb % i == 0)
			return (0);
		i++;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb <= 2)
		return (2);
	
	//if (nb >= 2147483643)
		//return (2147483647);
	while (ft_is_prime(nb) != 1)
		nb++;
	return (nb);
}

int main()
{
	printf("%d -> %d\n", -2412, ft_find_next_prime(-2412));
	printf("%d -> %d\n", 0, ft_find_next_prime(0));
	printf("%d -> %d\n", 1, ft_find_next_prime(1));
	printf("%d -> %d\n", 2, ft_find_next_prime(2));
	printf("%d -> %d\n", 7853, ft_find_next_prime(7853));
	printf("%d -> %d\n", 78989, ft_find_next_prime(78989));
	printf("%d -> %d\n", 379400, ft_find_next_prime(379400));
	printf("%d -> %d\n", 203279, ft_find_next_prime(203279));
	printf("%d -> %d\n", 45073, ft_find_next_prime(45073));
	printf("%d -> %d\n", 70678, ft_find_next_prime(70678));
	printf("%d -> %d\n", 292890, ft_find_next_prime(292890));
	printf("%d -> %d\n", 218651, ft_find_next_prime(218651));
	printf("%d -> %d\n", 253487, ft_find_next_prime(253487));
	printf("%d -> %d\n", 279090, ft_find_next_prime(279090));
	printf("%d -> %d\n", 397876, ft_find_next_prime(397876));
	printf("%d -> %d\n", 422458, ft_find_next_prime(422458));
	printf("%d -> %d\n", 135743, ft_find_next_prime(135743));
	printf("%d -> %d\n", 145472, ft_find_next_prime(145472));
	printf("%d -> %d\n", 348768, ft_find_next_prime(348768));
	printf("%d -> %d\n", 270402, ft_find_next_prime(270402));
	printf("%d -> %d\n", 50244, ft_find_next_prime(50244));
	printf("%d -> %d\n", 108616, ft_find_next_prime(108616));
	printf("%d -> %d\n", 104290, ft_find_next_prime(104290));
	printf("%d -> %d\n", 267344, ft_find_next_prime(267344));
	printf("%d -> %d\n", 343635, ft_find_next_prime(343635));
	printf("%d -> %d\n", 397909, ft_find_next_prime(397909));
	printf("%d -> %d\n", 114272, ft_find_next_prime(114272));
	printf("%d -> %d\n", 156258, ft_find_next_prime(156258));
	printf("%d -> %d\n", 377959, ft_find_next_prime(377959));
	printf("%d -> %d\n", 233067, ft_find_next_prime(233067));
	printf("%d -> %d\n", 208500, ft_find_next_prime(208500));
	printf("%d -> %d\n", 101498, ft_find_next_prime(101498));
	printf("%d -> %d\n", 129149, ft_find_next_prime(129149));
	printf("%d -> %d\n", 21123, ft_find_next_prime(21123));
	printf("%d -> %d\n", 346249, ft_find_next_prime(346249));
	printf("%d -> %d\n", 24202, ft_find_next_prime(24202));
	printf("%d -> %d\n", 394382, ft_find_next_prime(394382));
	printf("%d -> %d\n", 345744, ft_find_next_prime(345744));
	printf("%d -> %d\n", 168090, ft_find_next_prime(168090));
	printf("%d -> %d\n", 160925, ft_find_next_prime(160925));
	printf("%d -> %d\n", 5278, ft_find_next_prime(5278));
	printf("%d -> %d\n", 376991, ft_find_next_prime(376991));
	printf("%d -> %d\n", 303899, ft_find_next_prime(303899));
	printf("%d -> %d\n", 211117, ft_find_next_prime(211117));
	printf("%d -> %d\n", 371375, ft_find_next_prime(371375));
	printf("%d -> %d\n", 278196, ft_find_next_prime(278196));
	printf("%d -> %d\n", 236728, ft_find_next_prime(236728));
	printf("%d -> %d\n", 190659, ft_find_next_prime(190659));
	printf("%d -> %d\n", 381642, ft_find_next_prime(381642));
	printf("%d -> %d\n", 151758, ft_find_next_prime(151758));
	printf("%d -> %d\n", 257751, ft_find_next_prime(257751));
	printf("%d -> %d\n", 178905, ft_find_next_prime(178905));
	printf("%d -> %d\n", 283356, ft_find_next_prime(283356));
	printf("%d -> %d\n", 412893, ft_find_next_prime(412893));
	printf("%d -> %d\n", 264931, ft_find_next_prime(264931));
	printf("%d -> %d\n", 18154, ft_find_next_prime(18154));
	printf("%d -> %d\n", 273645, ft_find_next_prime(273645));
	printf("%d -> %d\n", 241277, ft_find_next_prime(241277));
	printf("%d -> %d\n", 168181, ft_find_next_prime(168181));
	printf("%d -> %d\n", 141046, ft_find_next_prime(141046));
	printf("%d -> %d\n", 196344, ft_find_next_prime(196344));
	printf("%d -> %d\n", 69885, ft_find_next_prime(69885));
	printf("%d -> %d\n", 133380, ft_find_next_prime(133380));
	printf("%d-> %d\n", 160013, ft_find_next_prime(160013));
	printf("%d -> %d\n", 419598, ft_find_next_prime(419598));
	printf("%d -> %d\n", 355094, ft_find_next_prime(355094));
	printf("%d -> %d\n", 303387, ft_find_next_prime(303387));
	printf("%d -> %d\n", 395038, ft_find_next_prime(395038));
	printf("%d -> %d\n", 68385, ft_find_next_prime(68385));
	printf("%d -> %d\n", 148771, ft_find_next_prime(148771));
	printf("%d -> %d\n", 342315, ft_find_next_prime(342315));
	printf("%d -> %d\n", 400688, ft_find_next_prime(400688));
	printf("%d -> %d\n", 227121, ft_find_next_prime(227121));
	printf("%d -> %d\n", 103049, ft_find_next_prime(103049));
	printf("%d -> %d\n", 321, ft_find_next_prime(321));
	printf("%d -> %d\n", 162628, ft_find_next_prime(162628));
	printf("%d -> %d\n", 388424, ft_find_next_prime(388424));
	printf("%d -> %d\n", 104269, ft_find_next_prime(104269));
	printf("%d -> %d\n", 287060, ft_find_next_prime(287060));
	printf("%d -> %d\n", 266583, ft_find_next_prime(266583));
	printf("%d -> %d\n", 325978, ft_find_next_prime(325978));
	printf("%d -> %d\n", 162139, ft_find_next_prime(162139));
	printf("%d -> %d\n", 126818, ft_find_next_prime(126818));
	printf("%d -> %d\n", 283499, ft_find_next_prime(283499));
	printf("%d -> %d\n", 371565, ft_find_next_prime(371565));
	printf("%d -> %d\n", 220541, ft_find_next_prime(220541));
	printf("%d -> %d\n", 353669, ft_find_next_prime(353669));
	printf("%d -> %d\n", 220559, ft_find_next_prime(220559));
	printf("%d -> %d\n", 9622, ft_find_next_prime(9622));
	printf("%d -> %d\n", 34201, ft_find_next_prime(34201));
	printf("%d -> %d\n", 27035, ft_find_next_prime(27035));
	printf("%d -> %d\n", 180125, ft_find_next_prime(180125));
	printf("%d -> %d\n", 138142, ft_find_next_prime(138142));
	printf("%d -> %d\n", 418715, ft_find_next_prime(418715));
	printf("%d -> %d\n", 252838, ft_find_next_prime(252838));
	printf("%d -> %d\n", 32687, ft_find_next_prime(32687));
	printf("%d -> %d\n", 240065, ft_find_next_prime(240065));
	printf("%d -> %d\n", 63951, ft_find_next_prime(63951));
	printf("%d -> %d\n", 276433, ft_find_next_prime(276433));
	printf("%d -> %d\n", 289248, ft_find_next_prime(289248));
	printf("%d -> %d\n", 154599, ft_find_next_prime(154599));
	printf("%d -> %d\n", 137192, ft_find_next_prime(137192));
	printf("%d -> %d\n", 190442, ft_find_next_prime(190442));
	printf("%d -> %d\n", 79865, ft_find_next_prime(79865));
	printf("%d -> %d\n", 271356, ft_find_next_prime(271356));
	printf("%d -> %d\n", 3581, ft_find_next_prime(3581));
}
