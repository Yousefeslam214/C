#include <stdio.h>
#include <stdlib.h>
/**
 * stackOverFlow -this exception happens when we exceed the pre 
 * allocated buffer of memory that our program has .
 * 
 * we basically have run out of memory, we have exceeded the stack, and 
 * our invocations have overflowed and we can no longer handle it.
 * 
 * freeCodeCamp - https://www.youtube.com/watch?v=IJDJ0kBx2LM
 */
void recursiveFunction() {
    recursiveFunction();  // Recursive call without terminating condition
}

int main() {
    recursiveFunction();  // Call the recursive function
    return 0;
}