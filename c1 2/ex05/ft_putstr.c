/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aaltiner <aaltiner@student.42kocaeli.com.  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/25 03:37:40 by aaltiner          #+#    #+#             */
/*   Updated: 2022/10/25 15:23:56 by aaltiner         ###   ########.tr       */
/*                                                                            */
/* ************************************************************************** */

//#include <unistd.h>

void	ft_putstr(char *str)
{
	int	i;

	i = 0;
	while (str[i])
	{
		write(1, &str[i], 1);
		i++;
	}
}
/*
int		main(void)
{
	char str[] = "Hello, world!";
	char *p_str;

	p_str = str;
	ft_putstr(p_str);
}
*/
