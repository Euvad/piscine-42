/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/12 11:57:13 by vtessier          #+#    #+#             */
/*   Updated: 2022/02/12 11:57:14 by vtessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "functions.h"

int		input_check(int ac, char *av);
void	fill_tab(char *av, int *tab);

void	display_grid(int *tab)
{
	int	i;
	int	j;
	int	a;

	i = 16;
	j = 0;
	a = 16;
	while (i < 32)
	{
		if (j == 4)
		{
			write(1, "\n", 1);
			j = 0;
		}
		ft_putnbr(tab[a]);
		write(1, " ", 1);
		j++;
		i++;
		a++;
	}
}

int	main(int argc, char **argv)
{
	int	tab[32] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0,
		0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};
	if (input_check(argc, argv[1]) == 0)
	{
		write(1, "Error", 5);
		return (0);
	}
	else if (input_check(argc, argv[1]) == 1)
	{
		fill_tab(argv[1], tab);
		display_grid(tab);
	}
}
