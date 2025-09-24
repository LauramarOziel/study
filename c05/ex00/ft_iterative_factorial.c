/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 08:39:26 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/24 10:05:46 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int	result;

	if (nb < 0)
		return (0);
	result = 1;
	while (nb > 0)
	{
		result *= nb;
		nb--;
	}
	return (result);
}
/*
#include <stdio.h>

int main(void)
{
	printf("factorial(-1) = %d (esperado: 0)\n", ft_iterative_factorial(-1));
	printf("factorial(0) = %d (esperado: 1)\n", ft_iterative_factorial(0));
	printf("factorial(1) = %d (esperado: 1)\n", ft_iterative_factorial(1));
	printf("factorial(3) = %d (esperado: 6)\n", ft_iterative_factorial(3));
	printf("factorial(5) = %d (esperado: 120)\n", ft_iterative_factorial(5));
	printf("factorial(6) = %d (esperado: 720)\n", ft_iterative_factorial(6));
	return (0);
}
*/
