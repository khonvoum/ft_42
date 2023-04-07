/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_rev_int_tab.c                                   :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltiner <aaltiner@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 14:44:26 by aaltiner          #+#    #+#             */
/*   Updated: 2022/10/25 16:10:07 by aaltiner         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <stdio.h>

void	ft_rev_int_tab(int *tab, int size)
{
	int	i;
	int	temp;

	i = 0;
	while (i < (size / 2))
	{
		temp = tab[i];
		tab[i] = tab[size - 1 - i];
		tab[size - 1 - i] = temp;
		i++;
	}
}
/*
int main()
{
    int tab[3] = "akif";
    int size = 4;
    int i;
    
    i = 0;
    
    ft_rev_int_tab(tab, size);
    while (i < size)
    {
        printf("%d", tab[i]);
        i++;
    }
    //printf("%d", tab[0]);
    
    return 0;
    
}
*/
