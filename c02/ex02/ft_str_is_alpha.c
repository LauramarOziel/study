/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_alpha.c                                  :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 07:50:30 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 07:57:59 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_alpha(char *str)
{
	while (*str)
	{
		if (!((*str >= 'a' && *str <= 'z') || (*str >= 'A' && *str <= 'Z')))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*teste1 = "Hello";
	char	*teste2 = "Hello42";
	char	*teste3 = "Hello World";
	char	*teste4 = "";

	printf("'%s' -> %d\n", teste1, ft_str_is_alpha(teste1));
	printf("'%s' -> %d\n", teste2, ft_str_is_alpha(teste2));
	printf("'%s' -> %d\n", teste3, ft_str_is_alpha(teste3));
	printf("'%s' -> %d\n", teste4, ft_str_is_alpha(teste4));
	return (0);
}
*/
