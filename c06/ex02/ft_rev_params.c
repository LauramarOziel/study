/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_params.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/23 08:05:46 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/23 08:29:03 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

int	main(int argc, char **argv)
{
	int	a;
	int	i;

	a = argc - 1;
	if (argc > 1)
	{
		while (a >= 1)
		{
			i = 0;
			while (argv[a][i] != '\0')
			{
				write (1, &argv[a][i], 1);
				i++;
			}
			write (1, "\n", 1);
			a--;
		}
	}
	return (0);
}
