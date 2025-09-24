/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 09:26:01 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/24 11:43:02 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_fibonacci(int index)
{
	if (index < 0)
		return (-1);
	if (index == 0)
		return (0);
	if (index == 1)
		return (1);
	return (ft_fibonacci(index - 1) + ft_fibonacci(index - 2));
}
/*
#include <stdio.h>

int main(void)
{
	printf("fib(2) = %d (esperado: 1)\n", ft_fibonacci(2));
	printf("fib(3) = %d (esperado: 2)\n", ft_fibonacci(3));
	printf("fib(4) = %d (esperado: 3)\n", ft_fibonacci(4));
	printf("fib(5) = %d (esperado: 5)\n", ft_fibonacci(5));
	printf("fib(6) = %d (esperado: 8)\n", ft_fibonacci(6));
	printf("fib(7) = %d (esperado: 13)\n", ft_fibonacci(7));
	return (0);
}
*/
