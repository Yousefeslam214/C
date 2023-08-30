#include <iostream>
#include <cmath>
#include <string>

using namespace std;

/**
 * 3n+1 series: Next(n):
 * if n is odd then n =  3 * n + 1. 
 * if n is even then n = n/2.
 * if n == 1, stop
 * 
 * E.g. 22 11 34 17 52 26 13 40 20 10 50 16 8 4 2 1
 * Given n, find length of 3n+1 sequence. E.g. F3n_1(22) = 16
 * 
 * 
 * main - Call the recursive function.
 * 
 * Return: zero.
 * 
 * Competitve programing: https://www.youtube.com/watch?v=hyk46UmJPS4
*/

int F3n_1(int n)     // Recursion State: n
{
	if(n == 1)
		return 1;
	
	if(n%2 == 0)
		return 1 + F3n_1(n/2);  // 1 + as we have an element in the sequence
	
	return 1 + F3n_1(3 * n + 1);
}
int main() {
	cout<< F3n_1(22)<< endl;  // Call the recursive function
	return 0;
}
