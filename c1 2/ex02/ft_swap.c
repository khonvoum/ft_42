/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_swap.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltiner <aaltiner@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 03:26:51 by aaltiner          #+#    #+#             */
/*   Updated: 2022/10/25 15:19:51 by aaltiner         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_swap(int *a, int *b)
{
	int	fornow;

	fornow = *a;
	*a = *b;
	*b = fornow;
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
