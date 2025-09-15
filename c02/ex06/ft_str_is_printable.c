/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_str_is_printable.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 08:18:11 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 08:22:27 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_str_is_printable(char *str)
{
	while (*str)
	{
		if (!(*str >= 32 && *str <= 126))
			return (0);
		str++;
	}
	return (1);
}

/*
#include <stdio.h>

int	main(void)
{
	char	*teste1 = "Hello 42!";
	char	*teste2 = "Hello\t42";
	char	*teste3 = "Hello\n";
	char	*teste4 = "";
	char	*teste5 = "~#$%^&*()";

	printf("'%s' -> %d\n", teste1, ft_str_is_printable(teste1));
	printf("'Hello\\t42' -> %d\n", ft_str_is_printable(teste2));
	printf("'Hello\\n' -> %d\n", ft_str_is_printable(teste3));
	printf("'%s' -> %d\n", teste4, ft_str_is_printable(teste4));
	printf("'%s' -> %d\n", teste5, ft_str_is_printable(teste5));
	return (0);
}
*/
