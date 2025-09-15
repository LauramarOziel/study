/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 08:38:10 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 08:58:45 by loziel-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


int	is_alphanumeric(char c)
{
	return ((c >= 'a' && c <= 'z')
		|| (c >= 'A' && c <= 'Z')
		|| (c >= '0' && c <= '9'));
}

char	*ft_strcapitalize(char *str)
{
	char	*original_str;
	int		new_word;

	original_str = str;
	new_word = 1;
	while (*str)
	{
		if (is_alphanumeric(*str))
		{
			if (new_word && *str >= 'a' && *str <= 'z')
				*str = *str - 32;
			else if (!new_word && *str >= 'A' && *str <= 'Z')
				*str = *str + 32;
			new_word = 0;
		}
		else
			new_word = 1;
		str++;
	}
	return (original_str);
}

/*
#include <stdio.h>

int	main(void)
{
	char	teste1[] = "hi, how are you? 42words forty-two; fifty+and+one";
	char	teste2[] = "HELLO WORLD 123abc";
	char	teste3[] = "alReAdY mIxEd CaSe";
	char	teste4[] = "";

	printf("Antes:  '%s'\n", teste1);
	ft_strcapitalize(teste1);
	printf("Depois: '%s'\n\n", teste1);

	printf("Antes:  '%s'\n", teste2);
	ft_strcapitalize(teste2);
	printf("Depois: '%s'\n\n", teste2);

	printf("Antes:  '%s'\n", teste3);
	ft_strcapitalize(teste3);
	printf("Depois: '%s'\n\n", teste3);

	printf("Antes:  '%s'\n", teste4);
	ft_strcapitalize(teste4);
	printf("Depois: '%s'\n", teste4);
	return (0);
}
*/
