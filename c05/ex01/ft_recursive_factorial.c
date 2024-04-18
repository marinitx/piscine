/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_factorial.c                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:12:53 by mhiguera          #+#    #+#             */
/*   Updated: 2022/11/24 18:52:30 by mhiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_recursive_factorial(int nb)
{
	unsigned int	i;

	i = 1;
	if (nb < 0)
		return (0);
	if (nb > 0)
	{
		i = i * nb * ft_recursive_factorial(nb - 1);
		nb--;
	}
	return (i);
}
/*int main(void)
{
	printf("%d", ft_recursive_factorial(5));
}*/
