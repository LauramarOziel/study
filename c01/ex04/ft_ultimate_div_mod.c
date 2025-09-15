/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:05:50 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/13 19:25:47 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_ultimate_div_mod(int *a, int *b)
{
	int	div;
	int	mod;

	div = *a / *b;
	mod = *a % *b;
	*a = div;
	*b = mod;
}

/*
#include <stdio.h>

int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 2;
	printf("a before: %d\n", a);
	printf("b before: %d\n", b);
	ft_ultimate_div_mod(&a, &b);
	printf("a after: %d\n", a);
	printf("b after: %d\n", b);
	return (0);
}
*/
