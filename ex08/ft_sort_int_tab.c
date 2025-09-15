/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_sort_int_tab.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/14 21:25:39 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/14 21:48:09 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_sort_int_tab(int *tab, int size)
{
	int	i;
	int	j;
	int	temp;

	i = 0;
	while (i < size - 1)
	{
		j = 0;
		while (j < size - 1 - i)
		{
			if (tab[j] > tab[j + 1])
			{
				temp = tab[j];
				tab[j] = tab[j + 1];
				tab[j + 1] = temp;
			}
			j++;
		}
		i++;
	}
}

/*
#include <stdio.h>
int	main(void)
{
	int	i;
	int	numbers[] = {4, 2, 7, 1, 3};

	printf("Before: ");
	i = 0;
	while (i < 5)
	{
		printf("%d ", numbers[i]);
		i++;
	}
	printf("\n");
	ft_sort_int_tab(numbers, 5);
	printf("After:  ");
	i = 0;
	while (i < 5)
	{
		printf("%d ", numbers[i]);
		i++;
	}
	printf("\n");
	return (0);
}
*/
