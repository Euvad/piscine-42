/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vtessier <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/02/07 14:27:14 by vtessier          #+#    #+#             */
/*   Updated: 2022/02/07 14:27:16 by vtessier         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
		i++;
	return (i);
}

unsigned int	ft_strlcpy(char *dest, char *src, unsigned int size)
{
	unsigned int	_a;
	unsigned int	_b;

	_b = ft_strlen(src);
	_a = 0;
	if (size != 0)
	{
		while (src[_a] != '\0' && _a < size - 1)
		{
			dest[_a] = src[_a];
			_a++;
		}
		dest[_a] = '\0';
	}
	return (_b);
}
