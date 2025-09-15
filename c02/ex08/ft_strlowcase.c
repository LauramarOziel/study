/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlowcase.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 08:28:54 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 08:32:18 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strlowcase(char *str)
{
	char	*original_str;

	original_str = str;
	while (*str)
	{
		if (*str >= 'A' && *str <= 'Z')
			*str = *str + 32;
		str++;
	}
	return (original_str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	teste1[] = "HELLO WORLD";
	char	teste2[] = "Hello 42!";
	char	teste3[] = "already low";
	char	teste4[] = "";

	printf("Antes:  '%s'\n", teste1);
	ft_strlowcase(teste1);
	printf("Depois: '%s'\n\n", teste1);

	printf("Antes:  '%s'\n", teste2);
	ft_strlowcase(teste2);
	printf("Depois: '%s'\n\n", teste2);

	printf("Antes:  '%s'\n", teste3);
	ft_strlowcase(teste3);
	printf("Depois: '%s'\n\n", teste3);

	printf("Antes:  '%s'\n", teste4);
	ft_strlowcase(teste4);
	printf("Depois: '%s'\n", teste4);
	return (0);
}
*/
