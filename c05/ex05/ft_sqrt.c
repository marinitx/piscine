/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   sqrt.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhiguera <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/11/24 16:04:27 by mhiguera          #+#    #+#             */
/*   Updated: 2022/11/24 20:18:58 by mhiguera         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<stdio.h>

int	ft_sqrt(int nb)
{
	int	num;

	num = 1;
	if (nb > 0)
	{
		while (num * num <= nb)
		{
			if (num > 46340)
				return (0);
			if (num * num == nb)
				return (num);
			else
				num++;
		}
	}
	return (0);
}
/*
int main()
{
	printf("%d", ft_sqrt(2147483647));
	return(0);
}
*/
