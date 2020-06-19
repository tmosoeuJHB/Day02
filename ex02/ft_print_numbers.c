#include <stdio.h>
#include <unistd.h>

void ft_putchar(char c) {
	//write (STDOUT_FILENO, &c, 1);
	write (1, &c, 1);
}

void ft_print_numbers(void) {
	char digits;
	digits = '0';
	while (digits <= '9') {
		ft_putchar(digits);
		digits++;
	}
}

int main(void) {
	ft_print_numbers();
	return 0;
}

