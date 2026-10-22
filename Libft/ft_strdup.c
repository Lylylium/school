/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 14:58:55 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/22 14:59:53 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	int		i;
	int		len;
	char	*t;

	i = 0;
	len = ft_strlen ((char *) s) + 1;
	t = malloc (len * sizeof(char));
	if (!t)
		return (free(t), NULL);
	while (len--)
	{
		t[i] = s[i];
		i++;
	}
	return (t);
}

// int	main(void)
// {
// 	char	*s = "Hello les coupines";

// 	printf("s = %s\n", s);
// 	printf("strdup = %s\n", strdup((char *) s));
// 	printf("ft_strdup = %s\n", ft_strdup((char *) s));
// 	return (0);
// }