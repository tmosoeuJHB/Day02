#include <stdio.h>
#include <unistd.h>


int ft_putchar(char c) {
	write(1, &c, 1);
	return 0;
}
void print_var(char x, char y) {
	ft_putchar(x);
	ft_putchar(y);
	if(x != '9') {
		ft_putchar(',');
		ft_putchar(' ');
	}
}
void ft_print_comb2(void) {
	char x;
	char y;

	x = '0';
	while(x  <= '0'){
	y = x + 1;
	while(y <= '99'){
		print_var(x, y);
		y++;
	}
	x++;
	}
}

int main() {
	ft_print_comb2();
	return(0);
}


	
