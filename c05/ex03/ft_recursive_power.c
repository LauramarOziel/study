/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 09:20:50 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/24 10:42:51 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_power(int nb, int power)
{
	if (power < 0)
		return (0);
	if (power == 0)
		return (1);
	return (nb * ft_recursive_power(nb, power - 1));
}
/*
#include <stdio.h>

int main(void)
{
	printf("power(2, -1) = %d (esperado: 0)\n", ft_recursive_power(2, -1));
	printf("power(0, 0) = %d (esperado: 1)\n", ft_recursive_power(0, 0));
	printf("power(5, 0) = %d (esperado: 1)\n", ft_recursive_power(5, 0));
	printf("power(2, 3) = %d (esperado: 8)\n", ft_recursive_power(2, 3));
	printf("power(3, 4) = %d (esperado: 81)\n", ft_recursive_power(3, 4));
	printf("power(-3, 3) = %d (esperado: -27)\n", ft_recursive_power(-3, 3));
	return (0);
}
*/
