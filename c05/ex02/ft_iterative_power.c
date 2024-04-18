/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_iterative_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 12:23:47 by mhiguera          #+#    #+#             */
/*   Updated: 2022/11/24 18:52:48 by mhiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_iterative_power(int nb, int power)
{
	int	resultado;

	resultado = 1;
	if (power < 0)
		resultado = 0;
	else if (power == 0)
		resultado = 1;
	while (power > 0)
	{
		resultado = resultado * nb;
		power--;
	}
	return (resultado);
}
/*int main(void)
{
	printf("%d", ft_iterative_power(6, 3));
}*/
