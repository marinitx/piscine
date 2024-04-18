/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb2.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/08 17:50:19 by mhiguera          #+#    #+#             */
/*   Updated: 2022/11/14 13:21:50 by mhiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

void	ft_putchar(char c)
{
	write (1, &c, 1);
}

void	ft_print_comb2(void)
{
	int	a;
	int	b;

	a = 0;
	while (a <= 98)
	{
			b = a + 1;
		while (b <= 99)
		{
			ft_putchar(a / 10 + '0');
			ft_putchar(a % 10 + '0');
			write (1, " ", 1);
			ft_putchar(b / 10 + '0');
			ft_putchar(b % 10 + '0');
			if (a != 98 || b != 99)
				write(1, ", ", 2);
		b++;
		}
	a++;
	}
}
