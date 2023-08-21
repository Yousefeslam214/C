#include <stdio.h>
#include <stdlib.h>
void calculate(int a, int b, int *multiply, int *addition)
{
	*multiply = a * b;
	*addition = a + b;
}
int main(void)
{
	int multiply;
	int addition;

	calculate(20, 30, &multiply, &addition);
	printf("%d\n", multiply);
	printf("%d\n", addition);
return (0);
}


