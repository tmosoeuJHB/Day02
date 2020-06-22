/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tmosoeu <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2020/06/22 12:24:32 by tmosoeu           #+#    #+#             */
/*   Updated: 2020/06/22 12:59:08 by tmosoeu          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <unistd.h>
#include <stdio.h>


int ft_putchar(char c){
	write(1, &c, 1);
	return 0;
}

void ft_putnbr(int nb) {
	write(1, &nb, 1);
}
	int main()
{
	ft_putnbr(42);
}
