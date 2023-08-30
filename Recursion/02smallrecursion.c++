#include <iostream>
#include <cmath>
#include <string>
using namespace std;
/**
 * fact - function is said to be recursive
 * if it calls itself.
 * 
 * main - Call the recursive function.
 * Return: zero.
 * 
 * Competitve programing: https://www.youtube.com/watch?v=hyk46UmJPS4
*/

// Trace a4(4)   ## Before recursion
int a1(int n)
{
    return n;
}
int a2(int n)
{
    return n * a1(n - 1);
}
int a3(int n)
{
    return n * a2(n - 1);
}
int a4(int n)
{
    return n * a3(n - 1);
}

//Factorial after recursion
//Factorial(n) - n * Factorial(n-1).    Factorial(0) - Factorial(1) -1
int fact(int n)
{
    if(n <= 1)
        return 1;
    return n * fact(n - 1);
}
/*
fact(4)
    4*fact(3)
        3*fact(2)
            2*fact(1)
            2* 1 <-- 2
        3* 2 <-- 6
    4* 6 <-- 24
*/

int main() {
	cout << a4(5)<<"\n";  // Call the trace function
    cout << fact(5)<<"\n";  // Call the recursive function
	return 0;
}