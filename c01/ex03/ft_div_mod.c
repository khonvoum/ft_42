/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_div_mod.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaciome <mhaciome@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 03:30:16 by aaltiner          #+#    #+#             */
/*   Updated: 2023/04/07 04:37:13 by mhaciome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_div_mod(int a, int b, int *div, int *mod)
{
	if (b != 0)
	{
		*div = a / b;
		*mod = a % b;
	}
}
/*
int		main(void)
{
	int a  = 5;
	int b  = 2;
	int *div = &a;
	int *mod = &b;

	ft_div_mod(a, b, div, mod);

	printf("Value of a is : %d",*div);
	printf("\nValue of b is : %d",*mod);
}
*/
