/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:57:14 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/22 14:57:27 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	int		j;

	i = 0;
	if (*little == ' ')
		return ((char *)big);
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
				return ((char *) big + (i - j));
		}
		i++;
	}
	return ("0");
}

// int	main(void)
// {
// 	printf("%s\n", ft_strnstr("Bonjour tout le monde", "ond", 105));
// 	return (0);
// }