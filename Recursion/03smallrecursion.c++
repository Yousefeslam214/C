#include <iostream>
#include <cmath>
#include <string>
using namespace std;
/**
 *  triangle - function is said to be recursive
 * if it calls itself.
 * 
 * main - Call the recursive function.
 * Return: zero.
 * 
 * Competitve programing: https://www.youtube.com/watch?v=hyk46UmJPS4
*/

void triangle(int x)
{
    if(x <= 0)
        return;
    triangle(x - 1);
    for(int i = 1; i <= x; i++)
        cout << "*";
    cout<< endl;
}
/*
Call Triangle(3)
    triangle(3)
        triangle(2)
            triangle(1)
                triangle(0) <-- base case
            triangle(1) <-- prints 1 star & new line
        triangle(2) <-- prints 2 star & new line
    triangle(3) <-- prints 3 star & new line
*/
int main() {
    triangle(3);  // Call the recursive function
	return 0;
}
/*
*
**
***
*/