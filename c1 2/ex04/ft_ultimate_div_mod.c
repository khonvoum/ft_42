/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_div_mod.c                              :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltiner <aaltiner@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 03:33:51 by aaltiner          #+#    #+#             */
/*   Updated: 2022/10/25 15:21:35 by aaltiner         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_ultimate_div_mod(int *a, int *b)
{
	if (b != 0)
	{
		*a = *a / *b;
		*b = *a % *b;
	}
}
/*
int		main(void)
{
	int i = 10;
	int j = 5;
	int *a = &i;
	int *b = &j;

	printf("%d /",i);
	printf(" %d\n",j);

	ft_ultimate_div_mod(a, b);

	printf("div (*a) = %d\n",*a);
	printf("mod (*b) = %d",*b);

}
*/
