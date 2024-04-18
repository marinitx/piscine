/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/14 13:57:24 by mhiguera          #+#    #+#             */
/*   Updated: 2022/11/18 11:17:45 by mhiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	num;

	size--;
	i = 0;
	while (i < size)
	{
		num = tab[i];
		tab [i] = tab[size];
		tab[size] = num;
		i++;
		size--;
	}
}
/*int main(void)
{
	int tab[4] = {1, 2, 3 ,4};
	ft_rev_int_tab(tab, 4);
	int i;
	i=0;
	while(i<4)
	{
		printf("%d", tab[i]);
		i++;
	}
	return (0);
}*/	
