/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/21 12:34:36 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/21 12:34:36 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *s, int c)
{
	int	len;

	len = ft_strlen((char *)s);
	while (s[len] != c)
		len--;
	if (s[len] == c)
		return ((char *)s + len);
	else if (s[len] == 0)
		return (NULL);
	return (0);
}

// int	main(void)
// {
// 	const char	*s = "bonjour la mifa";

// 	printf("%s", ft_strrchr(s, 'o'));
// 	return (0);
// }