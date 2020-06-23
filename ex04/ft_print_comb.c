/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_print_comb.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/23 11:43:11 by tmosoeu           #+#    #+#             */
/*   Updated: 2020/06/23 11:43:45 by tmosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


void ft_print_var(char x, char y, char z) {
	ft_putchar(x);
	ft_putchar(y);
	ft_putchar(z);
	if (z != '7') {
		ft_putchar(',');
		ft_putchar(' ');
	}
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
		ft_print_var(x, y, z);
		z++;
	}
		y++;
	}
		x++;
	}
	
}
