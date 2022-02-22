/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/14 14:14:36 by vtessier          #+#    #+#             */
/*   Updated: 2022/02/14 14:14:37 by vtessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_iterative_factorial(int nb)
{
	int		i;
	long	result;

	result = 1;
	i = 0;
	if (nb < 0)
		return (0);
	while (++i <= nb)
		result *= i;
	return (result);
}
