/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_is_prime.c                                      :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 09:43:58 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/24 11:28:48 by loziel-d         ###   ########.fr       */
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
/*
#include <stdio.h>

int main(void)
{
	printf("is_prime(0) = %d (esperado: 0)\n", ft_is_prime(0));
	printf("is_prime(1) = %d (esperado: 0)\n", ft_is_prime(1));
	printf("is_prime(2) = %d (esperado: 1)\n", ft_is_prime(2));
	printf("is_prime(3) = %d (esperado: 1)\n", ft_is_prime(3));
	printf("is_prime(4) = %d (esperado: 0)\n", ft_is_prime(4));
	printf("is_prime(15) = %d (esperado: 0)\n", ft_is_prime(15));
	printf("is_prime(17) = %d (esperado: 1)\n", ft_is_prime(17));
	printf("is_prime(25) = %d (esperado: 0)\n", ft_is_prime(25));
	return (0);
}
*/
