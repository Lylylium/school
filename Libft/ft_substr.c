/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/22 15:15:57 by manguyen          #+#    #+#             */
/*   Updated: 2026/10/22 17:31:25 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*res;

	i = 0;
	if ((len == 0) || ((int) start > ft_strlen((char *) s)))
		return (ft_strdup(""));
	if (len > (size_t)(ft_strlen((char *) s) - start))
		len = ft_strlen((char *) s) - start;
	res = malloc((len + 1) * sizeof(char));
	if (!res)
		return (NULL);
	while (i < len)
		res[i++] = s[start++];
	res[i] = '\0';
	return (res);
}

// int	main(void)
// {
// 	printf("%s\n", ft_substr("Vive les meufs", 100, 2));
// 	return (0);
// }