#include <iostream>

using namespace std;

/**
 * main - Call the recursive function.
 * 
 * Return: zero.
 * 
 * Competitve programing: https://www.youtube.com/watch?v=hyk46UmJPS4
*/

void printNumber(int n) // for n > 0
{  //1234567
	if(n) // This block will executed when the value of n is non-zero.
	{
		printNumber(n / 10);  //214/10 = 21
		cout << n % 10<<endl;       //214%10 =4
	}
}

/**
 * E.g. 7 = 111    214 = 11010110
 * If number%2 get for us last bit in binary representation.
 * If we could print last bit, we could print.
*/

void printNumberBits(int n) // for n > 0
{
	if(n)  // This block will executed when the value of n is non-zero.
	{
		printNumberBits(n / 2);   //214/2 = 1101011 last bit removed
		cout << n % 2;            //214%2 = 0
	}
}

int main()
{
	printNumber(214);
	printNumberBits(214);
	cout<<endl;
	return 0;
}
