/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 20:25:56 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/14 21:24:11 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < size / 2)
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	test1[] = {10, 20, 30};
	int	test2[] = {100, 200};
	int	test3[] = {42};

	printf("Test 1 - Before: 10 20 30\n");
	ft_rev_int_tab(test1, 3);
	printf("Test 1 - After: %d %d %d\n\n", test1[0], test1[1], test1[2]);

	printf("Test 2 - Before: 100 200\n");
	ft_rev_int_tab(test2, 2);
	printf("Test 2 - After: %d %d\n\n", test2[0], test2[1]);

	printf("Test 3 - Before: 42\n");
	ft_rev_int_tab(test3, 1);
	printf("Test 3 - After: %d\n", test3[0]);
	return (0);
}
*/
