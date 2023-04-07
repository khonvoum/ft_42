/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_ultimate_ft.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mhaciome <mhaciome@42kocaeli.com>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/07 04:18:54 by mhaciome          #+#    #+#             */
/*   Updated: 2023/04/07 04:18:55 by mhaciome         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void ft_ultimate_ft(int *********nbr)
{
	*********nbr = 42;
}

int main()
{
	int *********p_nbr;
	int nbr;

	nbr = 21;
	p_nbr = &&&&&&&nbr;

	printf("%d\n", nbr);
	ft_ultimate_ft(p_nbr);
	printf("%d\n", nbr);
	return (0);
}

