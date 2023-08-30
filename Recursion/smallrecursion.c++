#include <iostream>
#include <cmath>
#include <string>
using namespace std;
/**
 * sayIamTopCoder - function is said to be recursive
 * if it calls itself.
 * 
 * main - Call the recursive function.
 * Return: zero.
*/
void sayIamTopCoder(int cnt)
{
	if (cnt < 1)  // Base Case
		return;
	cout<<"I am TopCoder.\n"; // Some Logic
	sayIamTopCoder(cnt - 1); // Sub-Problem - never go to infintiy
}

int main() {
	sayIamTopCoder(5);  // Call the recursive function
	return 0;
}