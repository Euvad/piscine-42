/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:57:48 by vtessier          #+#    #+#             */
/*   Updated: 2022/02/12 11:57:49 by vtessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_putnbr(int nb)
{
	if (nb == -2147483648)
	{
		ft_putchar('-');
		ft_putchar('2');
		ft_putnbr(147483648);
	}
	else if (nb < 0)
	{
		ft_putchar('-');
		nb = -nb;
		ft_putnbr(nb);
	}
	else if (nb > 9)
	{
		ft_putnbr(nb / 10);
		ft_putnbr(nb % 10);
	}
	else
		ft_putchar(nb + 48);
}

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i])
		i++;
	return (i);
}

int	input_check(int ac, char *av)
{
	int	i;
	int	k;

	i = 0;
	if (ac == 2)
	{
		if (ft_strlen(av) != 31)
			return (0);
		while (av[i])
		{
			k = 0;
			if (av[i] >= '1' && av[i] <= '4' && k == 0)
			{
				k = 1;
				i++;
			}
			else
				return (0);
			if (av[i] == '\0')
				return (1);
			if (k == 1 && av[i] == ' ')
			{
				k = 0;
				i++;
			}
			else
				return (0);
		}
	}
	else
		return (0);
}

void	fill_tab(char *av, int *tab)
{
	int	i;
	int	j;

	i = 0;
	j = 0;
	while (i <= 30)
	{
		if (av[i] == ' ')
			i++;
		else
		{
			tab[j] = av[i] - '0';
			j++;
			i++;
		}
	}
}
