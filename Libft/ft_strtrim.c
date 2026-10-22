#include "libft.h"

static	int	count(const char *str, const char *set)
{
	int	i;
	int	j;
	int	len;
	int	count;

	i = 0;
	count = 0;
	while (str[i++])
	{
		j = 0;
		while (set[j++])
		{
			if (str[i] == set[j])
				count++;
		}
	}
	len = ft_strlen((char *) str) + 1;
	return (len - count);
}

static	char	*ft_trim_deb(char const *s1, char const *set)
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
			return (s2 = ((char *) s1 + i));
		i++;
	}
	return ((char *) s1);
}

static	char	*ft_trim_fin(char *s2, char const *set)
{
	int	i;
	int	j;

	i = ft_strlen((char *) s2);
	while (i)
	{
		j = 0;
		while (s2[i] != set[j] && set[j])
			j++;
		if (set[j] == '\0')
		{
			s2[i] = '\0';
			return (s2);
		}	
		i--;
	}
	return (s2);
}

char	*ft_strtrim(char const *s1, char const *set)
{	
	int		i;
	char	*t1;
	char	*t2;
	char	*trim;

	i = 0;
	t1 = ft_trim_deb(s1, set);
	t2 = ft_trim_fin(t1, set);
	trim = malloc(count(s1, set) * sizeof(char));
	// trim = malloc((t2 + 1) * sizeof(char));
	while (t2[i])
		trim[i] = t2[i];	
	return (trim);
}

int	main(void)
{
	char	*s = "ababbbbabbHey how are you?ababbbba";
	char	*set = "ab";
	char	*trim;

	trim = ft_strtrim(s, set);
	printf("strtrim = %s\n", trim);
	return (0);
}

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