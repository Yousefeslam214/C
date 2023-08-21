#include <stdio.h>
#include <stdlib.h>
int sumByReference(int *a, int *b)
{
	*a = *a + *b;
	return *a ;
}
int sumByValue(int a, int b)
{
	a = a + b ;
	return a ;
}
int main(void)
{
	int firstNumber = 20;
	int secondNumber = 30;
	printf("firstNumber : %d\n", firstNumber);
	int resultValue = sumByValue(firstNumber, secondNumber);
	printf("resultValue : %d\n", resultValue);
	printf("firstNumber : %d\n", firstNumber);
	int resultReference = sumByReference(&firstNumber, &secondNumber);
	printf("resultReference : %d\n", resultReference);
	printf("firstNumber : %d\n", firstNumber);
	


return (0);
}
