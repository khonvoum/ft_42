/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaciome <mhaciome@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 04:36:07 by mhaciome          #+#    #+#             */
/*   Updated: 2023/04/07 04:36:46 by mhaciome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	swp;

	swp = *a;
	*a = *b;
	*b = swp;
}
/*
int	main()
{
	int i  = 7;
	int j  = 3;
	int *a = &i;
	int *b = &j;

	ft_swap(a, b);
	printf("i should be 7 and it is : %u\n",*a);
	printf("j should be 3 and it is : %u",*b);
}
*/
