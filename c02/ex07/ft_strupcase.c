/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strupcase.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 08:23:07 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 08:28:11 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

char	*ft_strupcase(char *str)
{
	char	*original_str;

	original_str = str;
	while (*str)
	{
		if (*str >= 'a' && *str <= 'z')
			*str = *str - 32;
		str++;
	}
	return (original_str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	teste1[] = "hello world";
	char	teste2[] = "Hello 42!";
	char	teste3[] = "ALREADY CAPS";
	char	teste4[] = "";

	printf("Antes:  '%s'\n", teste1);
	ft_strupcase(teste1);
	printf("Depois: '%s'\n\n", teste1);

	printf("Antes:  '%s'\n", teste2);
	ft_strupcase(teste2);
	printf("Depois: '%s'\n\n", teste2);

	printf("Antes:  '%s'\n", teste3);
	ft_strupcase(teste3);
	printf("Depois: '%s'\n\n", teste3);

	printf("Antes:  '%s'\n", teste4);
	ft_strupcase(teste4);
	printf("Depois: '%s'\n", teste4);
	return (0);
}
*/
