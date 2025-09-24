/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sqrt.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/24 09:42:50 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/24 11:44:33 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_sqrt(int nb)
{
	int	i;

	if (nb < 0)
		return (0);
	if (nb == 0)
		return (0);
	if (nb == 1)
		return (1);
	i = 1;
	while (i * i <= nb)
	{
		if (i * i == nb)
			return (i);
		i++;
	}
	return (0);
}
/*
#include <stdio.h>

int main(void)
{
	printf("sqrt(0) = %d (esperado: 0)\n", ft_sqrt(0));
	printf("sqrt(1) = %d (esperado: 1)\n", ft_sqrt(1));
	printf("sqrt(4) = %d (esperado: 2)\n", ft_sqrt(4));
	printf("sqrt(9) = %d (esperado: 3)\n", ft_sqrt(9));
	printf("sqrt(15) = %d (esperado: 0)\n", ft_sqrt(15));
	printf("sqrt(16) = %d (esperado: 4)\n", ft_sqrt(16));
	printf("sqrt(25) = %d (esperado: 5)\n", ft_sqrt(25));
	return (0);
}
*/
