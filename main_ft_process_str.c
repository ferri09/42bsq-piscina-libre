#include <stdio.h>

char **ft_str_to_map(char *str, int row, int col);

int main()
{
	char	**ptr;
	int		i;

	i = 0;
	ptr = ft_str_to_map("12345\n67890\n12345\n67890\n12345", 5, 5);
	while (i < 5)
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	printf("\n-----------------\n");
	i = 0;
	ptr = ft_str_to_map("12345\n", 1, 5);
	while (i < 1)
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	printf("\n-----------------\n");
	i = 0;
	ptr = ft_str_to_map("1",1 , 1);
	while (i < 1)
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	printf("\n-----------------\n");
	i = 0;
	ptr = ft_str_to_map("1\n6\n1\n6\n1", 5, 1);
	while (i < 5)
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	printf("\n-----------------\n");
	i = 0;
	ptr = ft_str_to_map("..o..\n...o.\no....\no..o.\n.....", 5, 5);
	while (i < 5)
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	printf("\n-----------------\n");
	i = 0;
	ptr = ft_str_to_map("aabaa\nbaaaa\naabaa\naaaab\nbaaba", 5, 5);
	while (i < 5)
	{
		printf("%s\n", ptr[i]);
		i++;
	}
	return (0);
}
