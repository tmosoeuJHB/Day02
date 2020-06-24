/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:43:11 by tmosoeu           #+#    #+#             */
/*   Updated: 2020/06/24 09:23:31 by tmosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>

int ft_putchar(char c){
	write(1, &c, 1);
	return (c);
}
void ft_print_comb(void){
	char x;
	char y; 
	char z;

 	x = '0';
	while(x <= '7' )  {
		y =x +1;
	while(y <= '8') {
 		z = y+ 1;
	while(z <= '9') {
		if (x != '0' || y != '1' || z != '2'){
		ft_putchar(',');
		}
		if (x != '0' || y != '1' || z != '2'){
		ft_putchar(' ');
		}

		ft_putchar( x);
		ft_putchar( y);
		ft_putchar( z);
		z++;
	}
		y++;
	}
		x++;
	}
	
}
 
