/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_fibonacci.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 15:43:53 by mhiguera          #+#    #+#             */
/*   Updated: 2022/11/24 18:46:34 by mhiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

int	ft_fibonacci(int index)
{
	int	resultado;

	resultado = 0;
	if (index < 0)
		return (-1);
	if ((index == 1) || (index == 0))
		return (index);
	else
		resultado = ft_fibonacci(index - 1) + ft_fibonacci(index - 2);
	return (resultado);
}

/*int main (void)
{
	printf("%d", ft_fibonacci(34));
}*/
