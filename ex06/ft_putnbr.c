/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:24:32 by tmosoeu           #+#    #+#             */
/*   Updated: 2020/06/24 09:37:25 by tmosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include<unistd.h>

int ft_putchar(char c)
{
	write(1, &c, 1);
	return (c);
}

void ft_putnbr(int nb) 
{
	char c;
	if(nb < 0){
		nb = -nb;
		ft_putchar('-');
	}
	if (nb < 10)
	{
		ft_putchar(nb + '0');
	}
		else
		{
			ft_putnbr(nb / 10);
			ft_putnbr(nb % 10);
		}
}
	


