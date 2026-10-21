/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 17:44:36 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/21 17:55:43 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char    *ft_strnstr(const char *big, const char *little, size_t len)
{
	int i;
	int j;

	i = 0;
	if (*little == "")
		return (big);
	while (i < len)
	{
		j = 0;
		if (little[j] == big[i])
		{
			while (little[j] == big[i])
			{
				i++;
				j++;
			}
			if (little[j] == '\0')
			{
				printf("%s", big + i - j);
				return (big[i-j]);
			}
		}
		i++;
	}
	return (0);
}

int	main(void)
{
	printf("%s\n", ft_strnstr("Bonjour tout le monde", "tout", 15));
	return (0);
}