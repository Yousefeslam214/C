#include <stdio.h>
#include <stdlib.h>
/**
 *https://www.youtube.com/watch?v=zuegQmMdy8M&t=724s
 *
 *FreeCodeCamp
 */
int main(void)
{
	int a;
	int *p;
	p = &a;
	a = 5;
	printf("p is  : %p\n",p); /* p is  : 0x7ffd5e091c9c */
	printf("&a is : %p\n",&a);/* &a is : 0x7ffd5e091c9c */
	printf("&p is : %p\n",&p);/* &p is : 0x7ffd5e091ca0 */
	printf("*p is : %d\n",*p);/* *p is : 5 *//* dereferencing = عدم الرجوع*/
	*p=8;
	printf("a is  : %d\n",a);/*   a is : 8 */
	return (0);
} 