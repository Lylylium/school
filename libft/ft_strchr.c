/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:33:30 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/21 12:34:20 by manguyen         ###   ########.ch       */
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