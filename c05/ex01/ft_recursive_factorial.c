/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 09:16:58 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/24 11:37:38 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_recursive_factorial(int nb)
{
	if (nb < 0)
		return (0);
	if (nb == 0 || nb == 1)
		return (1);
	return (nb * ft_recursive_factorial(nb - 1));
}
/*
#include <stdio.h>

int main(void)
{
	printf("factorial(3) = %d (esperado: 6)\n", ft_recursive_factorial(3));
	printf("factorial(5) = %d (esperado: 120)\n", ft_recursive_factorial(5));
	printf("factorial(6) = %d (esperado: 720)\n", ft_recursive_factorial(6));
	return (0);
}
*/
