/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 11:34:23 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/22 11:37:51 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_print_comb2(void)
{
	int	first;
	int	second;

	first = 0;
	while (first <= 98)
	{
		second = first + 1;
		while (second <= 99)
		{
			write(1, &"0123456789"[first / 10], 1);
			write(1, &"0123456789"[first % 10], 1);
			write(1, " ", 1);
			write(1, &"0123456789"[second / 10], 1);
			write(1, &"0123456789"[second % 10], 1);
			if (first != 98 || second != 99)
				write(1, ", ", 2);
			second++;
		}
		first++;
	}
}
/*
int	main(void)
{
	ft_print_comb2();
	write(1, "\n", 1);
	return (0);
}
*/
