/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 08:57:43 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/22 11:13:58 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}
/*
int	main(void)
{
	ft_putstr ("Hello Word!");
	write (1, "\n", 1);
	ft_putstr ("42Rio");
	write (1, "\n", 1);
	return (0);
}
*/
