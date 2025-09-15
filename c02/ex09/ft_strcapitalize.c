/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcapitalize.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: loziel-d <loziel-d@student.42.rio>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/15 08:38:10 by loziel-d          #+#    #+#             */
/*   Updated: 2025/09/15 11:17:08 by loziel-d         ###   ########.fr       */
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
	char	test1[] = "hi, how are you? 42words forty-two; fifty+and+one";
	char	test2[] = "HELLO WORLD 123abc";
	char	test3[] = "alReAdY mIxEd CaSe";
	char	test4[] = "";

	printf("Before:  '%s'\n", test1);
	ft_strcapitalize(test1);
	printf("After: '%s'\n\n", test1);

	printf("Before:  '%s'\n", test2);
	ft_strcapitalize(test2);
	printf("After: '%s'\n\n", test2);

	printf("Before:  '%s'\n", test3);
	ft_strcapitalize(test3);
	printf("After: '%s'\n\n", test3);

	printf("Before:  '%s'\n", test4);
	ft_strcapitalize(test4);
	printf("After: '%s'\n", test4);
	return (0);
}
*/
