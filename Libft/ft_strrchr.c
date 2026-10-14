/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.c    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 00:00:13 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/15 00:10:32 by manguyen         ###   ########.fr       */
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
		return ((char *)s);
	else if (s[len] == 0)
		return (NULL);
	return (0);
}

int	main(void)
{
	const char	*s = "bonjour la mifa";
	printf("%s", ft_strrchr(s, 'o'));
	return (0);
}