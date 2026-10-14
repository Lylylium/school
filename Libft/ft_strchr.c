/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/14 23:34:57 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/14 23:59:28 by manguyen         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strchr(const char *s, int c)
{
	while (*s != c)
		s++;
	if (*s == c)
		return ((char *)s);
	else if (*s == '\0')
		return (NULL);
	return (0);
}

// int	main(void)
// {
// 	const char	*s = "bonjour la mifa";
// 	printf("%s", ft_strchr(s, 'j'));
// 	return (0);
// }