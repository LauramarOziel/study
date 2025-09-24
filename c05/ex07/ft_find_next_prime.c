/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_find_next_prime.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 09:52:38 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/24 11:49:44 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_is_prime(int nb)
{
	int	i;

	if (nb < 2)
		return (0);
	if (nb == 2)
		return (1);
	if (nb % 2 == 0)
		return (0);
	i = 3;
	while (i * i <= nb)
	{
		if (nb % i == 0)
			return (0);
		i += 2;
	}
	return (1);
}

int	ft_find_next_prime(int nb)
{
	if (nb < 2)
		return (2);
	while (!ft_is_prime(nb))
		nb++;
	return (nb);
}
/*
#include <stdio.h>

int main(void)
{
	printf("next_prime(-5) = %d (esperado: 2)\n", ft_find_next_prime(-5));
	printf("next_prime(0) = %d (esperado: 2)\n", ft_find_next_prime(0));
	printf("next_prime(1) = %d (esperado: 2)\n", ft_find_next_prime(1));
	printf("next_prime(2) = %d (esperado: 2)\n", ft_find_next_prime(2));
	printf("next_prime(7) = %d (esperado: 7)\n", ft_find_next_prime(7));
	printf("next_prime(10) = %d (esperado: 11)\n", ft_find_next_prime(10));
	printf("next_prime(14) = %d (esperado: 17)\n", ft_find_next_prime(14));
	printf("next_prime(20) = %d (esperado: 23)\n", ft_find_next_prime(20));
	return (0);
}
*/
