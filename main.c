#include "ft_printf.h"

int main(void)
{
	int val = 42;
	int *ptr = &val;
	int my_printf = ft_printf("%d %s %c %p %u %x %X %% yay!! \n", 42, "Abu Dhabi", 'C', ptr, 52452, 42, 24);
	int built_in_printf = printf("%d %s %c %p %u %x %X %% yay!! \n", 42, "Abu Dhabi", 'C', ptr, 52452, 42, 24);
	printf("%d %d\n", my_printf, built_in_printf);
}