/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_recursive_power.c                               :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/23 13:13:14 by mhiguera          #+#    #+#             */
/*   Updated: 2022/11/24 20:32:04 by mhiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_recursive_power(int nb, int power)
{
	int	resultado;

	resultado = nb;
	if (power < 0)
		return (0);
	if (power > 1)
		return (nb * ft_recursive_power(resultado, (power - 1)));
	if (power == 0)
		return (1);
	return (resultado);
}
/*
int main(void)
{
	printf("%d", ft_recursive_power(20, 45));
}*/
