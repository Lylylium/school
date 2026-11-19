/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strmapi.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: manguyen <manguyen@student.42lausanne.ch>  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/11/19 15:31:29 by manguyen          #+#    #+#             */
/*   Updated: 2026/11/19 16:03:42 by manguyen         ###   ########.ch       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

char f(unsigned int i, char c)
{
	char str;
	str = c + 1;
	return (str);
}

char	*ft_strmapi(char const *s, char(*f)(unsigned int, char))
{
	int		i;
	char	*res;

	i = 0;
	res = malloc(ft_strlen((char *)s + 1) * sizeof(char));
	if 	(!res)
		return (NULL);
	while (s[i++])
		res[i] = f(s[i]);
	return (res);
}
// int	main(void)
// {
// 	char	*str = "bonjour hey";
// 	printf("strmapi = %s", ft_strmapi(str, *ft_isalpha()));
// 	return (0);
// }

int main()
{
	char str1[] = "abc";
	char* str2;
	str2 = ft_strmapi(str1, *f);
	printf("%s\n", str2);
}