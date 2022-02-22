#include <unistd.h>
int	ft_strlen(char *str)
{
	int	i;
	
	i = 0;
	while (str[i])
		i++;
	return (i);
}

char	ft_putstr(char *str)
{
	int	i;
	
	i = -1;
	while(str[++i])
		write(1, &str[i], 1);
}

void	wdmatch(char *str, char *str1)
{
	int	i;
	int	k;
	int	len;
	
	i = 0;
	k = 0;
	len = 0;
	while (str[i])
	{
		while (str1[k])
		{
			if (str[i] == str1[k])
			{
				len++;
				break;
			}
			k++;
		}
		i++;
	}
	if (len == ft_strlen(str))
		ft_putstr(str);
}

int main(int argc, char **argv)
{
	if (argc == 3)
		wdmatch(argv[1], argv[2]);
	write(1, "\n", 1);
	return (0);
}
