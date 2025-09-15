/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 18:34:41 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/14 20:22:52 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_swap(int *a, int *b)
{
	int	i;

	i = *a;
	*a = *b;
	*b = i;
}

/*
#include <stdio.h>
int	main(void)
{
	int	a;
	int	b;

	a = 10;
	b = 15;
	printf("a before: %d\n", a);
	printf("b before: %d\n", b);
	ft_swap(&a, &b);
	printf("a after: %d\n", a);
	printf("b after: %d\n", b);
	return (0);
}
*/
