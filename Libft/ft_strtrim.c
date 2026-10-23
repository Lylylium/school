#include "libft.h"

// int	ft_strlen(char	*str)
// {
// 	int	i;

// 	i = 0;
// 	while (str[i])
// 		i++;
// 	return (i);
// }

// static	int	count(const char *str, const char *set)
// {
// 	int	i;
// 	int	j;
// 	int	len;
// 	int	count;

// 	i = 0;
// 	count = 0;
// 	while (str[i++])
// 	{
// 		j = 0;
// 		while (set[j++])
// 		{
// 			if (str[i] == set[j])
// 				count++;
// 		}
// 	}
// 	len = ft_strlen((char *) str) + 1;
// 	return (len - count);
// }

static	char	*ft_trim_deb(char *s1, char const *set)
{
	int		i;
	int		j;
	char	*s2;

	i = 0;
	while (s1[i])
	{
		j = 0;
		while (s1[i] != set[j] && set[j])
			j++;
		if (set[j] == '\0')
			return (s2 = (s1 + i));
		i++;
	}
	return (s1);
}

static	char	*ft_trim_fin(char *s2, char const *set)
{
	int	i;
	int	j;
	char	*rip;

	rip = ft_strdup(s2);
	i = ft_strlen(s2);
	while (i)
	{
		if (ft_strlen((char *)set) <= 2)
		{
			j = 0;
			while (s2[i] != set[j] && set[j])
				j++;
			if (s2[i] != set[j])
			{
				rip[i + 1] = '\0';
				return (rip);
			}
			i--;
		}
		else
		{
			j = 0;
			while (set[j])
			{
				if (s2[i] != set[j])
					j++;
			}
			
			if (s2[i] != set[j] && set[j] == '\0')
				return (rip);
			rip[i + 1] = '\0';
			i--;
		}
		
	}
	return (rip);
}

char	*ft_strtrim(char const *s1, char const *set)
{	
	int		i;
	char	*t1;
	char	*t2;
	char	*trim;

	t1 = ft_trim_deb((char *) s1, set);
	t2 = ft_trim_fin(t1, set);
	// printf("ft_strlen(t2) + 1 = %d\n", ft_strlen(t2) + 1);
	// trim = malloc(count(s1, set) * sizeof(char));
	trim = malloc((ft_strlen(t2) + 1) * sizeof(char));
	i = 0;
	// printf("t2.1 = %c\n", t2[i]);
	// printf("t2 = %s\n", t2);
	// printf("trim1 = %s\n", trim);
	while (t2[i])
	{
		trim[i] = t2[i];
		// printf("i = %d\n", i);
		// printf("t2 = %c\n", t2[i]);
		// printf("trim = %c\n", trim[i]);
		// printf("trim2 = %s\n\n", trim);
		i++;
	}
	trim[i] = '\0';
	// 
	// printf("t2.2 = %c\n", t2[i]);
	// printf("trim2 = %s\n", trim);	
	return (trim);
}

// int	main(void)
// {
// 	char	*s = "abcdba";
// 	char	*set = "abc";
// 	char	*trim;

// 	trim = ft_strtrim(s, set);
// 	printf("strtrim = %s\n", trim);
// 	free(trim);
// 	return (0);
// }

// char	*ft_strtrim(char const *s1, char const *set)
// {
// 	int		i;
// 	int		j;
// 	int		t;
// 	char	*trim;

// 	t = 0;
// 	trim = malloc(count(s1, set) * sizeof(char));

// 	i = 0;
// 	while (s1[i])
// 	{
// 		j = 0;
// 		while (s1[i] != set[j] && set[j])
// 			j++;
// 		if (set[t] == '\0')
// 			return (s1 + i)
// 			trim[t++] == s1[i++];
			
// 		else if (s1[i] == set[j])
// 			i++;
// 	}



// 	i = ft_strlen((char *) s1);
// 	while (i)
// 	{
// 		t = 0;
// 		while (s1[i] != set[t] && set[t])
// 			t++;
// 		if (s1[i] == set[t])
// 			s1[i] = s1[i - 1];
// 		else if (set[t] == '\0');
// 		else
// 			i--;
// 	}

	
// 	return (trim);
// }