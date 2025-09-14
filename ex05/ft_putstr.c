/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/13 19:59:36 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/14 17:55:30 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

void	ft_putstr(char *str)
{
	while (*str)
	{
		write (1, str, 1);
		str++;
	}
}

/*
#include <unistd.h>
int	main(void)
{
	ft_putstr ("Hello Word!");
	write (1, "\n", 1);
	ft_putstr ("42Rio");
	write (1, "\n", 1);
}
*/
