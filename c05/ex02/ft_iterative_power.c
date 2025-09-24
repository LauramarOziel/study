/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 09:18:11 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/24 11:39:39 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_power(int nb, int power)
{
	int	result;

	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	result = 1;
	while (power > 0)
	{
		result *= nb;
		power--;
	}
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	printf("power(5, 0) = %d (esperado: 1)\n", ft_iterative_power(5, 0));
	printf("power(2, 3) = %d (esperado: 8)\n", ft_iterative_power(2, 3));
	printf("power(3, 4) = %d (esperado: 81)\n", ft_iterative_power(3, 4));
	printf("power(-3, 3) = %d (esperado: -27)\n", ft_iterative_power(-3, 3));
	return (0);
}
*/
